#include "euler2d/numerics/reconstruction.hpp"

namespace euler2d {

Reconstruction::Reconstruction(ReconstructionScheme scheme, LimiterType limiter)
    : scheme_(scheme), limiter_(limiter) {}

void Reconstruction::computeFaceStates(
    const Mesh2D &mesh, const std::vector<ConservativeState> &cellStates) {
  (void)mesh;
  (void)cellStates;

  // TODO: Reconstruct left/right states at each face.
  // TODO: Implement gradient calculation and limiter application.
}

} // namespace euler2d
