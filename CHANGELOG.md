# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [0.0.1] - 2026-03-13

### Added

- `predicates.cpp` source file taken from the [original implementation](https://www.cs.cmu.edu/~quake/robust.html).
- Initial library structure, header file.
- `CMakeLists.txt` for CMake build support.
- This changelog, license file and readme.
- `.clang-format` and `.gitignore` files.

### Changed

- Make `predicates.cpp` to compile with modern C++ compilers, including fixing some warnings and errors.
- Apply formating from clang-format.
- Comment out some unused code and macros, including printing and timing.
- Add `adobe::predicates` namespace and copyright info to `predicates.cpp`.
