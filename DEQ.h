#ifndef DEQ_H
#define DEQ_H

#include "Node.h"

template <typename T>
class DEQ {
private:
    Node<T>* front;
    Node<T>* rear;
    int length;

public:
    DEQ();
    ~DEQ();
    bool DEQisEmpty() const;
    void Add_Front(T data);
    void Add_Rear(T data);
    T Remove_Front();
    T Remove_Rear();
    T View_Front() const;
    T View_Rear() const;
    int DEQ_Length() const;
};

#endif // DEQ_H