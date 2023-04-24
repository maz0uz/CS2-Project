#ifndef PLANE_H
#define PLANE_H

class Plane {
private:
    int id;
    const int arrival_time;
    int time_wait; // time the plane has waited in the queue before landing/takeoff
    int probarv;
    int waittotal;
    int probfixed;
    const int time_max; // maximum time the plane can stay in the queue before taking off (assuming the airport has a policy to avoid planes from waiting too long)
    const int inter_arrival_time; // time between arrivals of consecutive planes
    const int time_landing;

public:
    Plane(int id);
    int setId();
    int getId();
    static int count;
    int RandomFunc(); // return probabilty from zero to 1 called probarv
    int probtime(int probarv, int probfixed, int current_t); // setting time arrival 
    int getArrivalTime();
    int setprobarv(int probarv);
    int getprobarv();
    int getprobfixed() const;
    int averagewait(int waittotal);
    int setwaittotal(int wt);
    int getwaittotal();
    int setTimeWait(int time_wait);
    int getTimeWait();
};

#endif // PLANE_H