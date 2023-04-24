#ifndef RUNWAY_H
#define RUNWAY_H

#include "DEQ.h"

#include "Plane.h"

class Runway {
  private: int arrivaltime;
  int time_landing;
  public: Runway(double time_landingg);
  bool Occupied(double arrivalt, double currenttime);
};

#endif
