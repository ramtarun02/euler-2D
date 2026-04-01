#pragma once

#include <array>
#include <cstddef>

namespace euler2d {

constexpr std::size_t kNumConserved = 4;

using Vec2 = std::array<double, 2>;
using Conserved = std::array<double, kNumConserved>;

enum class ReconstructionScheme {
  FirstOrder = 0,
  MUSCL, 
  WENO
};

enum class LimiterType {
  None = 0,
  MINMOD, 
  VANLEER
};

enum class MeshKind {
  Structured = 0,
  Unstructured
};

} // namespace euler2d
