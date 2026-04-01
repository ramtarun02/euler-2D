#pragma once

#include <vector>

#include "euler2d/core/state.hpp"

namespace euler2d {

class TimeIntegrator {
public:
  TimeIntegrator();

  void advance(std::vector<ConservativeState> &state,
               const std::vector<ConservativeState> &residual,
               double dt) const;

  // TODO: Add RK2/RK3 support and stage storage for higher-order schemes.
};

} // namespace euler2d
