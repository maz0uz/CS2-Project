// Airport class
#include "plane.h"
#include "DEQ.h"
class Airport {
private:
Runway runway; // runway object
DEQ landingQueue; // queue of planes waiting to land
int avgwt;
double landingProb; // probability of a plane arriving for landing
int time_max; //maximum time the plane can stay in the queue before taking off (assuming the airport has a policy to avoid planes from waiting too long)
int enter_arrival_time;//time between arrivals of consecutive planes
int clock; // clock that counts the number of minutes simulated
public:
Airport(int max,int entertime);
void simulate( int simulationTime);
double landingprob(); // return probabilty
void planeArrives(Plane p);
};
