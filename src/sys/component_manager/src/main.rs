// Copyright 2019 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// TODO Follow 2018 idioms
#![allow(elided_lifetimes_in_paths)]

use {
    anyhow::{Context as _, Error},
    component_manager_lib::{
        builtin_environment::{
            create_and_start_utc_clock, BuiltinEnvironment, BuiltinEnvironmentBuilder,
        },
        elf_runner::ElfRunner,
        klog, startup,
    },
    fuchsia_async as fasync,
    fuchsia_runtime::{job_default, process_self},
    fuchsia_trace_provider as trace_provider,
    fuchsia_zircon::JobCriticalOptions,
    log::*,
    std::{panic, process, sync::Arc, thread, time::Duration},
};

const NUM_THREADS: usize = 2;

fn main() -> Result<(), Error> {
    // Make sure we exit if there is a panic. Add this hook before we init the
    // KernelLogger because it installs its own hook and then calls any
    // existing hook.
    panic::set_hook(Box::new(|_| {
        println!("Panic in component_manager, aborting process.");
        // TODO remove after 43671 is resolved
        std::thread::spawn(move || {
            let mut nap_duration = Duration::from_secs(1);
            // Do a short sleep, hopefully under "normal" circumstances the
            // process will exit before this is printed
            thread::sleep(nap_duration);
            println!("component manager abort was started");
            // set a fairly long duration so we don't spam logs
            nap_duration = Duration::from_secs(30);
            loop {
                thread::sleep(nap_duration);
                println!("component manager alive long after abort");
            }
        });
        process::abort();
    }));

    // Set ourselves as critical to our job. If we do not fail gracefully, our
    // job will be killed.
    if let Err(err) =
        job_default().set_critical(JobCriticalOptions::RETCODE_NONZERO, &process_self())
    {
        panic!("Component manager failed to set itself as critical: {:?}", err);
    }

    klog::KernelLogger::init();
    let args = match startup::Arguments::from_args() {
        Ok(args) => args,
        Err(err) => {
            error!("{}\n{}", err, startup::Arguments::usage());
            return Err(err);
        }
    };

    info!("Component manager is starting up...");

    // Enable tracing in Component Manager
    trace_provider::trace_provider_create_with_fdio();

    let mut executor = fasync::Executor::new().context("error creating executor")?;

    let fut = async {
        match run_root(args).await {
            Ok(builtin_environment) => {
                builtin_environment.wait_for_root_realm_stop().await;
            }
            Err(err) => {
                panic!("Component manager setup failed: {:?}", err);
            }
        }
    };
    executor.run(fut, NUM_THREADS);

    Ok(())
}

async fn run_root(args: startup::Arguments) -> Result<BuiltinEnvironment, Error> {
    // Create a UTC clock if required.
    // Not every instance of component_manager running on the system maintains a
    // UTC clock. Only the root component_manager should have the --maintain-utc-clock
    // flag set.
    let utc_clock = if args.maintain_utc_clock {
        Some(Arc::new(create_and_start_utc_clock().await.context("failed to create UTC clock")?))
    } else {
        None
    };

    // Create an ELF runner for the root component.
    let runner = Arc::new(ElfRunner::new(&args, utc_clock.clone()));

    let mut builtin_environment_builder = BuiltinEnvironmentBuilder::new()
        .set_args(args)
        .add_runner("elf".into(), runner)
        .add_available_resolvers_from_namespace()?;
    if let Some(utc_clock) = utc_clock {
        builtin_environment_builder = builtin_environment_builder.set_utc_clock(utc_clock);
    }
    let builtin_environment = builtin_environment_builder.build().await?;
    builtin_environment.bind_service_fs_to_out().await?;

    builtin_environment.model.start().await;

    Ok(builtin_environment)
}
