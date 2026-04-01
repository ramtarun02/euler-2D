#pragma once

#include <array>

namespace euler2d {

enum class SCHEME { CONSTANT = 0, MUSCL };
enum class LIMITER { NONE = 0, MINMOD, VANLEER };
enum class Face { WEST = 0, EAST = 1 };

constexpr int kNumVars = 4;
constexpr int numFaces = 2;

using Conserved = std::array<double, kNumVars>;
using CellFaces = std::array<Conserved, numFaces>;

struct SimulationParams {
  int numPoints = 101;
  double gamma = 1.4;
  double xLength = 1.0;
  double yLength = 1.0;
  double CFL = 0.10;
  double endTime = 0.2;
  double dx = 0.0;
  double dy = 0.0;
  double time = 0.0;
  int timeStep = 0;
};

struct InitialCondition {
  double xDiscontinuity = 0.5;
  double rhoLeft = 1.0;
  double uLeft = 0.0;
  double pLeft = 1.0;
  double rhoRight = 0.125;
  double uRight = 0.0;
  double pRight = 0.1;
};

} // namespace euler2d
