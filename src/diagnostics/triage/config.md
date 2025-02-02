# Configuring `fx triage`

[Triage](README.md) analyzes snapshots according to config files.

## Overview

Triage allows anyone to easily add new ways to analyze `fx snapshot` data for
off-nominal conditions.

By default, the config files are read from
`//src/diagnostics/config/triage/*.triage`. Just add a new config file there.

Config file syntax is JSON5.

Each config file specifies four kinds of configuration: Selectors and Evals
(collectively called "Metrics"), Actions, and Tests.

*   Selectors load values for use by Evals and Actions.
*   Evals calculate values for use by Evals and Actions.
*   Actions are determine how to act uopn certain specified values.
*   Tests include sample data to verify that specified Actions trigger
    correctly.

Each Select, Eval, Test, and Action has a name. Thus, the structure of a config
file is:

```JSON
{
    "select": {
        "select1": "type:component:node/path:property",
        "select2": "type:component:node/path:property"
    },
    "eval": {
        "name1": "select1+select2",
        "name2": "select1 - select2"
    },
    "act": {
        "action1": { .... },
        "action2": { .... }
    },
    "test": {
        "test1": { .... },
        "test2": { .... }
    }
}
```

## Names and namespaces

Select, Eval, Action, Test, and config file names consist of one
alphabetic-or-underscore character followed by zero or more
alphanumeric-or-underscore characters. Thus, "abc123" and "_abc_123" are valid
names, but "123abc" and "abc-123" are not.

Evals, Tests, and Actions in one file can refer to Selectors, Evals, and Actions
in another file. The file basename is used as a namespace. `::` is used as the
separator. For example, if file `foo.triage` is loaded and contains a Metric
named `bar` then any config file may refer to `foo::bar`.

Names may be reused between Metrics, Tests, and Actions, but not between Select
and Eval.

NOTE: The current version of the program is not guaranteed to enforce these
restrictions.

### Selectors

Selectors use the Selector format. The text before the first `:` selects the
component name from the `inspect.json` file. The `.`-separated middle section
specifies Inspect Node names forming a path to the Property named after the
second `:`.

TODO(cphoenix) - Clarify this section once the correct selector-crate is in
place.

### Calculation

Eval strings are infix math expressions with normal operator precedence.

() may be used.

Arithmetic operators are + - * / //. / is float division; // is int division.

Functions are a function name, '(', comma-separated expression list, ')'.
Supported functions include:

*   Boolean
    *   And (1+ args)
    *   Or (1+ args)
    *   Not (1 arg)
*   Numeric
    *   Min (1+ args)
    *   Max (1+ args)

Metric type follows the type read from the Inspect file. Currently, UInt is
converted to Int upon reading. Operating on an Int and Float promotes the result
to Float.

Boolean operations are > < >= <= == !=. The expression should have only 0 or 1
of them.

Arrays / vectors are not supported (yet).

Whitespace is optional.

Metric names, including namespaced names, do not need to be specially delimited.

## Actions

Each Action determines how to surface information for a given selector.
Currently, there are two types of actions, "Warning" and "Gauge". Actions are
specified by providing the appropriate value for the `type` field.

### Warning Type

A `Warning` is an action that is used to raise an alert when a boolean condition
is met.

`Warning` supports the following fields: * `trigger`, a required field,
specifies the name of a Metric that supplies a Boolean value. * `print`, a
required field, specifies a string to output when the warning is raised.

```JSON
    "actions": {
        "disk_usage_high": {
            "type": "Warning", "trigger": "disk_used / disk_total > 0.95", "print": "Disk usage is high!"
        }
    }
```

### Gauge Type

A `Gauge` is a snapshot of a particular value at the time Triage is invoked.
`Gauge` supports the following fields: * `value`, a required field, specifies a
numerical value to display. * `format`, an optional field, specifies formatting
rules for the gauge's value.

#### Format

The `format` field allows users to control how the gauge value is displayed. If
this field isn't provided, or if an invalid value is given, then value will be
displayed as is. `format` supports the following values: * `percentage`: prints
a float as a percentage value.

```JSON
    "actions": {
        "disk_usage": {
            "type": "Gauge", "value": "disk_used / disk_total", "format": "percentage"
        }
    }
```

## Tests

Each Test specifies:

*   Sample data, keyed by `inspect`
*   A list of actions that should trigger given that data, keyed by `yes`
*   A list of actions that should not trigger given that data, keyed by `no`

The sample data is in the same format as an inspect.json file: an array of maps
where each map contains `path` and `contents` fields.

```JSON
    "tests": {
        "test1": {
            "yes": ["action1", "action2"],
            "no": ["action3"],
            "inspect": [
                {
                    "path": "global_data",
                    "contents": {"root": {"stats":
                        {"total_bytes": 10, "used_bytes": 9}}}
                }
            ]
        }
    }
```
