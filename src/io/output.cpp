#include "euler2d/io/output.hpp"

#include <utility>

namespace euler2d {

OutputWriter::OutputWriter(std::string outputDirectory)
    : outputDirectory_(std::move(outputDirectory)) {}

void OutputWriter::writeSnapshot(const Mesh2D &mesh,
                                 const std::vector<ConservativeState> &state,
                                 int step, double time) const {
  (void)mesh;
  (void)state;
  (void)step;
  (void)time;

  // TODO: Write fields to disk (CSV/VTK/etc.).
  // TODO: Store metadata needed for restart or post-processing.
}

} // namespace euler2d
