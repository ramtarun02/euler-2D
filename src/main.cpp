#include "euler2d/core/config.hpp"
#include "euler2d/solver/solver.hpp"

int main() {
  euler2d::SimulationConfig config;

  // TODO: Tune simulation settings for your first test case.
  // TODO: Configure boundary and initial conditions before running.

  euler2d::Euler2DSolver solver(config);
  solver.run();

  return 0;
}
