#pragma once

#include <vector>

#include "euler2d/mesh/mesh2d.hpp"

namespace euler2d {

class UnstructuredGrid final : public Mesh2D {
public:
  UnstructuredGrid();

  std::size_t cellCount() const override;
  const CellGeometry &cellGeometry(std::size_t cellId) const override;

  // TODO: Add mesh loader for triangles/quads from external files.
  // TODO: Store face normals, face areas, and left-right connectivity.

private:
  std::vector<CellGeometry> cells_;
};

} // namespace euler2d
