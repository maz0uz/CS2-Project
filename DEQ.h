#ifndef DEQ_H
#define DEQ_H
template < class T > ;
class DEQ {
  private: 
  struct Node {
    T Value;
    Node * next;
    Node * previous;
  };
  Node < T > * front;
  Node < T > * rear;
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
#endif // DEQ_H
