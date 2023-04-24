#ifndef RUNWAY_H
#define RUNWAY_H

#include "DEQ.h"
#include "Plane.h"

class Runway {
private:
    DEQ<Plane*> landing_queue; // queue of planes waiting to land
    int landing_time; // time taken for a plane to land
    int currentt;
    int t_rem_serv;
    int time_left; // time left for the current plane in the landing process

public:
    Runway(int landing_time);
    bool isBusy() const;
    void land();
    int sett_rem_serv(int t_rem_serv);
    int gett_rem_serv();
    int setcurrent_t(int currentt);
    void tick(); // returning current time
    void addToLandingQueue(Plane* plane);
};

#endif