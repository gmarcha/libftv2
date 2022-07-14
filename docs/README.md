# Inclusion best practices

- Only include in header file if header needs something as a dependency (i.e. a specific type or structure declaration),
- otherwise include in body file (a source file contains a header file and a body file).

There are some controversies and new paradigm (because of `#pragma once` - no optimization problem with include preprocessing[1]):
- [https://stackoverflow.com/questions/3943352/where-to-put-include-statements-header-or-source]
- [https://stackoverflow.com/questions/1804486/should-i-use-include-in-headers]

[1]: When preprocessing, if compiler reads `#pragma once`, it stops to read file (in opposite with `#ifndef/#define/#endif` constructs)
