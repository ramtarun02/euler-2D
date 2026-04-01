#include "euler2d/core/equations.hpp"

namespace euler2d {

ConservativeState primitiveToConservative(double gamma,
                                          const PrimitiveState &primitive) {
  (void)gamma;
  (void)primitive;

  // TODO: Implement primitive -> conservative conversion for 2D Euler.
  return {};
}

PrimitiveState conservativeToPrimitive(double gamma,
                                       const ConservativeState &conservative) {
  (void)gamma;
  (void)conservative;

  // TODO: Implement conservative -> primitive conversion with safeguards.
  return {};
}

double maxSignalSpeed(double gamma, const ConservativeState &state,
                      const Vec2 &normal) {
  (void)gamma;
  (void)state;
  (void)normal;

  // TODO: Compute |u_n| + a for CFL control.
  return 0.0;
}

} // namespace euler2d
