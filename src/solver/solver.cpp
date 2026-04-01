#include "euler2d/solver/solver.hpp"

#include <memory>

#include "euler2d/mesh/structured_grid.hpp"
#include "euler2d/mesh/unstructured_grid.hpp"

namespace euler2d {

Euler2DSolver::Euler2DSolver(const SimulationConfig &config)
    : config_(config),
      reconstruction_(config.reconstruction, config.limiter),
      riemann_(config.gamma),
      output_("output") {
  if (config_.meshKind == MeshKind::Structured) {
    mesh_ = std::make_unique<StructuredGrid>(config_);
  } else {
    mesh_ = std::make_unique<UnstructuredGrid>();
  }
}

void Euler2DSolver::run() {
  initialize();

  // TODO: Implement global time loop until config_.finalTime.
  // TODO: Per time step: compute dt, reconstruction, fluxes, residuals, update.
  // TODO: Save snapshots at desired intervals.
}

void Euler2DSolver::initialize() {
  // TODO: Set initial condition field over mesh cells.
  state_.resize(mesh_->cellCount());
  residual_.resize(mesh_->cellCount());
}

double Euler2DSolver::computeTimeStep() const {
  // TODO: Compute CFL-limited time step from local wave speeds.
  return 0.0;
}

void Euler2DSolver::assembleResidual() {
  // TODO: Assemble finite-volume residual from numerical fluxes across faces.
}

void Euler2DSolver::applyBoundaryConditions() {
  // TODO: Apply inflow/outflow/wall/far-field conditions.
}

} // namespace euler2d
