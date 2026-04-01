#include "types.hpp"

struct caseParameters {
  int numPoints;
  double xLength;
  double yLength;
  double CFL;
  double gamma;
  double dx;
  double dy;
  double endTime;
  int timeStep;
};

void startSimulation(struct caseParameters, double initialConditions,
                     int scheme, int limiter) {
  return
};

int main() {
  euler2d::caseParameters case;
  euler2d::InitialCondition initialConditions;

 startSimulation(case, initialConditions, euler2d::SCHEME::MUSCLE, euler2d::LIMITER::VANLEER);
 
  
}
