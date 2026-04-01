#pragma once

#include <cstddef>

#include "euler2d/core/state.hpp"

namespace euler2d {

class Mesh2D {
public:
  virtual ~Mesh2D() = default;

  virtual std::size_t cellCount() const = 0;
  virtual const CellGeometry &cellGeometry(std::size_t cellId) const = 0;

  // TODO: Expose cell-face connectivity and neighbor traversal API.
  // TODO: Expose boundary-face iteration API for boundary conditions.
};

} // namespace euler2d
