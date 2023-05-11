//
//  plane.hpp
//  m
//
//  Created by macbook on 11/05/2023.
//

#ifndef plane_hpp
#define plane_hpp
#include <vector>
#include <stdio.h>
#ifndef PLANE_H
#define PLANE_H
using namespace std;
class Plane {
 private:
    const int id;
    static int numberofplanes;
    double wtime;
    static vector<double> wait;
    double time_arrival;
 public:
  Plane();
  void AddPlane(double wait,double arrive);
  static double avgwait();
  void setwtime(double time);
  int getwtime();
  void settimearrival(double time);
  double gettimearrival();
  int getId();
};
#endif
#endif /* plane_hpp */
