// Plane class
class Plane {
private:
 int id; 
 static int count;
 static douple avg_wtime;
  int time_arrival; // setter and getters
public:
Plane(int id);
  void settimearrival (int time_arrival);
  douple gettimearrival (int time_arrival);
int getId();
};

// Runway class
class Runway {
private:
bool isOccupied; // is runway occupied or not
  const int time_landing;
public:
Runway(int time_landingg):  time_landing(time_landingg);
bool getOccupied();
void setOccupied(bool occupied);
};

// Airport class
class Airport {
private:
Runway runway; // runway object
deque<Plane*> landingQueue; // queue of planes waiting to land
deque<Plane*> takeoffQueue; // queue of planes waiting to take off
double landingProb; // probability of a plane arriving for landing
const int time_max; //maximum time the plane can stay in the queue before taking off (assuming the airport has a policy to avoid planes from waiting too long)
const douiple inter_arrival_time;//time between arrivals of consecutive planes
;
double takeoffProb; // probability of a plane arriving for takeoff
int clock; // clock that counts the number of minutes simulated
public:
Airport(douple time_landing,double landingProb, double takeoffProb);
void simulate( int simulationTime);
double landingprob(int currenttime); // return probabilty
double takeoffprob(int currenttime);
void planeArrives();
void planeLands();
int planeTakesOff();
};
