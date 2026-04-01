#pragma once

#include "euler2d/core/state.hpp"

namespace euler2d {

class RiemannSolver {
public:
  explicit RiemannSolver(double gamma);

  ConservativeState computeNumericalFlux(const ConservativeState &left,
                                         const ConservativeState &right,
                                         const Vec2 &normal) const;

  // TODO: Add selectable schemes (Rusanov, HLL, HLLC) behind this interface.

private:
  [[maybe_unused]] double gamma_ = 1.4;
};

} // namespace euler2d
