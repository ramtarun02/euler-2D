#pragma once

#include <vector>

#include "euler2d/core/config.hpp"
#include "euler2d/mesh/mesh2d.hpp"

namespace euler2d {

class StructuredGrid final : public Mesh2D {
public:
  explicit StructuredGrid(const SimulationConfig &config);

  std::size_t cellCount() const override;
  const CellGeometry &cellGeometry(std::size_t cellId) const override;

  int nx() const;
  int ny() const;

private:
  int nx_ = 0;
  int ny_ = 0;
  std::vector<CellGeometry> cells_;

  // TODO: Build cell-center and face metrics for finite-volume updates.
};

} // namespace euler2d
