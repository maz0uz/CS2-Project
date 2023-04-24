#ifndef RUNWAY_H
#define RUNWAY_H

class Runway {
 private: 
  int arrivaltime;
  int time_landing;
 public: 
  Runway(double time_landingg);
  void settimelanding(int time);
  int gettimelanding();
  bool Occupied(double arrivalt, double currenttime);
};

#endif
