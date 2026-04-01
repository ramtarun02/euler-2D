#pragma once

#include <string>
#include <vector>

#include "euler2d/core/state.hpp"
#include "euler2d/mesh/mesh2d.hpp"

namespace euler2d {

class OutputWriter {
public:
  explicit OutputWriter(std::string outputDirectory);

  void writeSnapshot(const Mesh2D &mesh,
                     const std::vector<ConservativeState> &state,
                     int step, double time) const;

  // TODO: Add VTK/CSV writers and naming convention for time series outputs.

private:
  std::string outputDirectory_;
};

} // namespace euler2d
