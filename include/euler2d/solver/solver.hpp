#pragma once

#include <memory>
#include <vector>

#include "euler2d/core/config.hpp"
#include "euler2d/core/state.hpp"
#include "euler2d/io/output.hpp"
#include "euler2d/mesh/mesh2d.hpp"
#include "euler2d/numerics/reconstruction.hpp"
#include "euler2d/numerics/riemann.hpp"
#include "euler2d/numerics/time_integrator.hpp"

namespace euler2d {

class Euler2DSolver {
public:
  explicit Euler2DSolver(const SimulationConfig &config);

  void run();

private:
  void initialize();
  double computeTimeStep() const;
  void assembleResidual();
  void applyBoundaryConditions();

  SimulationConfig config_;
  std::unique_ptr<Mesh2D> mesh_;

  std::vector<ConservativeState> state_;
  std::vector<ConservativeState> residual_;

  Reconstruction reconstruction_;
  RiemannSolver riemann_;
  TimeIntegrator integrator_;
  OutputWriter output_;
};

} // namespace euler2d
