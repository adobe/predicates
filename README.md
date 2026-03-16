# predicates

## Fast Robust Predicates for Computational Geometry

This library provides a canonical implementation of robust geometric predicates by Jonathan Richard Shewchuk. For detailed algorithmic background, see the [original publication](https://www.cs.cmu.edu/~quake/robust.html).

## Overview

The library implements exact 2D and 3D geometric predicates for computational geometry, including orientation and in-circle tests. These predicates determine the relative position of points using floating-point arithmetic while guaranteeing correct results even for near-degenerate configurations.

Traditional methods using direct computation (e.g., cross products or determinants) can produce incorrect results for near-degenerate cases due to floating-point rounding errors. This library uses adaptive precision arithmetic to ensure exact results regardless of input configuration, while maintaining performance for "simple", non-degenerate cases.

## Goals of this repository

Maintain a faithful implementation of Shewchuk's predicates, with minimal changes made to compile the code on modern C++ compiler and ease integration into other projects.

Possible improvements include:
- CMake support.
- Fixing some warnings issued by modern compilers.
- Adding tests to ensure there are no regressions from the original version.
- Templates instead of macros for selecting floating-point types.
- Precompute constants at compile time instead of calling `exactinit`.
- General maintenance.

## Licensing

The original code has been placed in the public domain by the author, Jonathan Richard Shewchuk, as stated on the [original website](https://www.cs.cmu.edu/~quake/robust.html). This repository is licensed under the [MIT License](LICENSE).

### Contributing

Contributions are welcomed! Read the [Contributing Guide](https://github.com/adobe/.github/blob/main/.github/CONTRIBUTING.md) for more information.
