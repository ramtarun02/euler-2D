#include "euler2d/mesh/unstructured_grid.hpp"

namespace euler2d {

UnstructuredGrid::UnstructuredGrid() {
  // TODO: Load mesh and initialize cell-centered geometry.
}

std::size_t UnstructuredGrid::cellCount() const { return cells_.size(); }

const CellGeometry &UnstructuredGrid::cellGeometry(std::size_t cellId) const {
  return cells_.at(cellId);
}

} // namespace euler2d
