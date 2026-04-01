#include "euler2d/mesh/structured_grid.hpp"

namespace euler2d {

StructuredGrid::StructuredGrid(const SimulationConfig &config)
    : nx_(config.nx), ny_(config.ny) {
  // TODO: Build structured control volumes and centroids.
  // TODO: Populate face metrics (areas and normals).
  cells_.resize(static_cast<std::size_t>(nx_) * static_cast<std::size_t>(ny_));
}

std::size_t StructuredGrid::cellCount() const { return cells_.size(); }

const CellGeometry &StructuredGrid::cellGeometry(std::size_t cellId) const {
  return cells_.at(cellId);
}

int StructuredGrid::nx() const { return nx_; }

int StructuredGrid::ny() const { return ny_; }

} // namespace euler2d
