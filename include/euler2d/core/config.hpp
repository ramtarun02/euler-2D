#pragma once

#include "types.hpp"

namespace euler2d {

struct SimulationConfig {
  double gamma = 1.4;
  double cfl = 0.4;
  double finalTime = 0.1;

  MeshKind meshKind = MeshKind::Structured;

  // Structured-grid settings (used when meshKind == Structured).
  int nx = 101;
  int ny = 101;
  double xMin = 0.0;
  double xMax = 1.0;
  double yMin = 0.0;
  double yMax = 1.0;

  ReconstructionScheme reconstruction = ReconstructionScheme::FirstOrder;
  LimiterType limiter = LimiterType::None;

  // TODO: Add runtime options for file paths, restart control, and output cadence.
  // TODO: Add unstructured-grid input controls (mesh file, boundary tags).
};

} // namespace euler2d
