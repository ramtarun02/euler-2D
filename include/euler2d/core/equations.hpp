#pragma once

#include "euler2d/core/state.hpp"

namespace euler2d {

ConservativeState primitiveToConservative(double gamma,
                                          const PrimitiveState &primitive);

PrimitiveState conservativeToPrimitive(double gamma,
                                       const ConservativeState &conservative);

// Returns maximum characteristic speed magnitude at a state.
double maxSignalSpeed(double gamma, const ConservativeState &state,
                      const Vec2 &normal);

// TODO: Add directional flux functions and thermodynamic helpers.

} // namespace euler2d
