//
//  plane.cpp
//  project cs2
//
//  Created by macbook on 11/05/2023.
//

#include "plane.hpp"
#include <vector>
//
//  plane.cpp
//  m
//
//  Created by macbook on 11/05/2023.
//

#include "plane.hpp"
Plane :: Plane() : id(numberofplanes){
    wtime=0;
    time_arrival=0;
}
void Plane :: AddPlane(double arrive){
    time_arrival=arrive;
    numberofplanes++;
}
double Plane :: avgwait(){
    auto iter=wait.begin();
    double sum=0;
    for(iter=wait.begin();iter<wait.end();iter++)
        sum=sum+*iter;
    double avg=sum/numberofplanes;
    return avg;
}
void Plane :: setwtime(double time){
    wtime=time;
}
int Plane :: getwtime(){
    return wtime;
}
void Plane :: settimearrival(double time){
    time_arrival=time;
}
double Plane :: gettimearrival(){
    return time_arrival;
}
int Plane :: getId(){
    return id;
}
