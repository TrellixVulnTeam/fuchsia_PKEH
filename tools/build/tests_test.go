// Copyright 2020 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package build

import (
	"encoding/json"
	"reflect"
	"testing"
)

func TestUnmarshalTest(t *testing.T) {
	manifest := `[
		 {
			"environments": [],
			"test": {
			  "cpu": "x64",
			  "label": "//garnet/bin/fuchsia:fuchsia_pkg(//build/toolchain/fuchsia:x64)",
			  "log_settings": {
				"max_severity": "ERROR"
			  },
			  "name": "fuchsia-pkg://fuchsia.com/fuchsia_pkg#meta/component1.cmx",
			  "os": "fuchsia",
			  "package_url": "fuchsia-pkg://fuchsia.com/fuchsia_pkg#meta/component1.cmx",
			  "path": ""
			}
		  },
		  {
			"environments": [],
			"test": {
			  "cpu": "x64",
			  "label": "//garnet/bin/fuchsia:fuchsia_pkg(//build/toolchain/fuchsia:x64)",
			  "log_settings": {
			  },
			  "name": "fuchsia-pkg://fuchsia.com/fuchsia_pkg#meta/component2.cmx",
			  "os": "fuchsia",
			  "package_url": "fuchsia-pkg://fuchsia.com/fuchsia_pkg#meta/component2.cmx",
			  "path": ""
			}
		  },
		  {
			"environments": [],
			"test": {
			  "cpu": "x64",
			  "label": "//garnet/bin/fuchsia:fuchsia_pkg(//build/toolchain/fuchsia:x64)",
			  "name": "fuchsia-pkg://fuchsia.com/fuchsia_pkg#meta/component3.cmx",
			  "os": "fuchsia",
			  "package_url": "fuchsia-pkg://fuchsia.com/fuchsia_pkg#meta/component3.cmx",
			  "path": ""
			}
		  }
	]`
	expected := []TestSpec{
		{
			Test: Test{
				Name:            "fuchsia-pkg://fuchsia.com/fuchsia_pkg#meta/component1.cmx",
				PackageURL:      "fuchsia-pkg://fuchsia.com/fuchsia_pkg#meta/component1.cmx",
				Path:            "",
				Label:           "//garnet/bin/fuchsia:fuchsia_pkg(//build/toolchain/fuchsia:x64)",
				OS:              "fuchsia",
				Command:         nil,
				LogSettings:     LogSettings{MaxSeverity: "ERROR"},
				RuntimeDepsFile: "",
			},
			Envs: []Environment{},
		},
		{
			Test: Test{
				Name:            "fuchsia-pkg://fuchsia.com/fuchsia_pkg#meta/component2.cmx",
				PackageURL:      "fuchsia-pkg://fuchsia.com/fuchsia_pkg#meta/component2.cmx",
				Path:            "",
				Label:           "//garnet/bin/fuchsia:fuchsia_pkg(//build/toolchain/fuchsia:x64)",
				OS:              "fuchsia",
				Command:         nil,
				LogSettings:     LogSettings{},
				RuntimeDepsFile: "",
			},
			Envs: []Environment{},
		},
		{
			Test: Test{
				Name:            "fuchsia-pkg://fuchsia.com/fuchsia_pkg#meta/component3.cmx",
				PackageURL:      "fuchsia-pkg://fuchsia.com/fuchsia_pkg#meta/component3.cmx",
				Path:            "",
				Label:           "//garnet/bin/fuchsia:fuchsia_pkg(//build/toolchain/fuchsia:x64)",
				OS:              "fuchsia",
				Command:         nil,
				LogSettings:     LogSettings{},
				RuntimeDepsFile: "",
			},
			Envs: []Environment{},
		},
	}
	var test_specs []TestSpec
	if err := json.Unmarshal([]byte(manifest), &test_specs); err != nil {
		t.Fatalf("error un-marshalling test specs: %v", err)
	}
	if !reflect.DeepEqual(test_specs, expected) {
		t.Fatalf("got test spec: %#v\n\nexpected: %#v", test_specs, expected)
	}
}
