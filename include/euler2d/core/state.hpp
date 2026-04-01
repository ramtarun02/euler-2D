#pragma once

#include "types.hpp"

namespace euler2d {

struct PrimitiveState {
  double rho = 1.0;
  double u = 0.0;
  double v = 0.0;
  double p = 1.0;
};

struct ConservativeState {
  Conserved values{0.0, 0.0, 0.0, 0.0};
};

struct CellGeometry {
  Vec2 centroid{0.0, 0.0};
  double volume = 0.0;

  // TODO: Extend with face-based data needed by unstructured control volumes.
};

} // namespace euler2d
