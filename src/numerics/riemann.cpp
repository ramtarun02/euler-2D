#include "euler2d/numerics/riemann.hpp"

namespace euler2d {

RiemannSolver::RiemannSolver(double gamma) : gamma_(gamma) {}

ConservativeState RiemannSolver::computeNumericalFlux(
    const ConservativeState &left, const ConservativeState &right,
    const Vec2 &normal) const {
  (void)left;
  (void)right;
  (void)normal;

  // TODO: Implement numerical flux (Rusanov/HLL/HLLC).
  // TODO: Use gamma_ and projected normal direction.
  return {};
}

} // namespace euler2d
