#ifndef PLANE_H
#define PLANE_H
class Plane {
  private: 
  const int id;
  static int numberofplanes;
  int wtime;
  static int wait[count];
  int time_arrival; 
  public: Plane(int ID): id(ID);
  static double avgwait();
  void setwtime(int time);
  int getwtime();
  void settimearrival(int time);
  int gettimearrival();
  int getId();
};
#endif
