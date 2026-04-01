#include "euler2d/numerics/time_integrator.hpp"

namespace euler2d {

TimeIntegrator::TimeIntegrator() = default;

void TimeIntegrator::advance(std::vector<ConservativeState> &state,
                             const std::vector<ConservativeState> &residual,
                             double dt) const {
  (void)state;
  (void)residual;
  (void)dt;

  // TODO: Update conservative variables using your chosen time scheme.
}

} // namespace euler2d
