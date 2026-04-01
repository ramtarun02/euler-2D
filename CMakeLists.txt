cmake_minimum_required(VERSION 3.16)
project(euler2d LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(EULER2D_ENABLE_WARNINGS "Enable strict warnings" ON)

add_library(euler2d_core
	src/core/equations.cpp
	src/mesh/structured_grid.cpp
	src/mesh/unstructured_grid.cpp
	src/numerics/reconstruction.cpp
	src/numerics/riemann.cpp
	src/numerics/time_integrator.cpp
	src/io/output.cpp
	src/solver/solver.cpp
)

target_include_directories(euler2d_core
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/include
)

if(EULER2D_ENABLE_WARNINGS)
	target_compile_options(euler2d_core
		PRIVATE
			-Wall
			-Wextra
			-Wpedantic
	)
endif()

add_executable(euler2d
	src/main.cpp
)

target_link_libraries(euler2d
	PRIVATE
		euler2d_core
)
