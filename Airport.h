#ifndef Airport_H
#define Airport_H

#include "DEQ.h"

#include "Plane.h"

#include "Runway.h"

// Airport class
class Airport {
 private: 
  Runway runway; // runway object
  DEQ < Plane > landingQueue; // queue of planes waiting to land
  int avgwt;
  double landingProb; // probability of a plane arriving for landing
  int time_max;
  int clock; // clock that counts the number of minutes simulated
 public: 
  Airport(int max);
  void simulate(int simulationTime);
  double landingprob(); // random function generator
  void planeArrives(Plane p);
};
