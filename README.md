# 2D Euler CFD Solver (Learning Scaffold)

This repository is intentionally scaffolded with compile-safe placeholders so you can implement the solver yourself.

## Design Goals

- Keep modules separated by responsibility: core, mesh, numerics, solver, and io.
- Make structured-grid implementation straightforward now.
- Keep interfaces ready for unstructured-grid support later.
- Avoid hiding implementation details so the learning path remains explicit.

## Layout

```
include/
	types.hpp
	euler2d/
		core/
			config.hpp
			equations.hpp
			state.hpp
		mesh/
			mesh2d.hpp
			structured_grid.hpp
			unstructured_grid.hpp
		numerics/
			reconstruction.hpp
			riemann.hpp
			time_integrator.hpp
		io/
			output.hpp
		solver/
			solver.hpp

src/
	main.cpp
	core/
		equations.cpp
	mesh/
		structured_grid.cpp
		unstructured_grid.cpp
	numerics/
		reconstruction.cpp
		riemann.cpp
		time_integrator.cpp
	io/
		output.cpp
	solver/
		solver.cpp
```

## Build

```bash
cmake -S . -B build
cmake --build build
./build/euler2d
```

## How To Implement

1. Start with data definitions in `core/state.hpp` and runtime settings in `core/config.hpp`.
2. Implement Euler physics helpers in `core/equations.cpp`.
3. Implement the structured mesh path first in `mesh/structured_grid.cpp`.
4. Add your flux + reconstruction + time update in `numerics/*`.
5. Drive everything from `solver/solver.cpp`.
6. Add output in `io/output.cpp`.
7. Later, implement `mesh/unstructured_grid.cpp` and extend numerics interfaces.

All implementation points are marked with `TODO` comments.


