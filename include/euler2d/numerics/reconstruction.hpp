#pragma once

#include <vector>

#include "euler2d/core/config.hpp"
#include "euler2d/core/state.hpp"
#include "euler2d/mesh/mesh2d.hpp"

namespace euler2d {

class Reconstruction {
public:
  Reconstruction(ReconstructionScheme scheme, LimiterType limiter);

  void computeFaceStates(const Mesh2D &mesh,
                         const std::vector<ConservativeState> &cellStates);

  // TODO: Return/retrieve left-right interface states for each face.

private:
  [[maybe_unused]] ReconstructionScheme scheme_;
  [[maybe_unused]] LimiterType limiter_;
};

} // namespace euler2d
