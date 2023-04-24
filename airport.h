// Plane class
class Plane {
private:
 const int id; 
 static int count;
 int wtime;
 static int wait[count];
 int time_arrival; // setter and getters
public:
 Plane(int ID) : id(ID);
 static double avgwait();
 void setwtime(int time);
 int getwtime();
 void settimearrival (int time);
 int gettimearrival ();
 int getId();
};

template <class T>;
class DEQ{
private:
 struct Node{
  T Value;
  Node* next;
  Node* previous;
 };
 Node<T> *front;
 Node<T> *rear;
 int len;
public:
 DEQ();
 ~DEQ();
 bool DEQisEmpty();
 void Add_Front(T data);
 void Add_Rear(T data);
 T Remove_Front();
 T Remove_Rear();
 T View_Front();
 T View_Rear();
 int DEQ_Length();
 void DisplayDEQ();
};

// Runway class
class Runway {
private:
int arrivaltime;
int time_landing;
public:
Runway(double time_landingg);
bool Occupied(double arrivalt,double currenttime);
};

// Airport class
class Airport {
private:
Runway runway; // runway object
deque<Plane*> landingQueue; // queue of planes waiting to land
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
