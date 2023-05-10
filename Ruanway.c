#include <stdio.h>
#include "Runway.h"
Runway :: Runway(double time_landingg){
    time_landing=time_landingg;
    arrivaltime=NULL;
}
void Runway :: settimelanding(double time){
    time_landing=time;
}
double Runway :: gettimelanding(){
    return time_landing;
}
bool Runway :: Occupied(double arrivalt,double currenttime){
    if(arrivaltime+landing_time>currenttime)
        return true;
    else{
        arrivaltime=arrivalt;
        return false;
    }
}
