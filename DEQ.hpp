//
//  DEQ.hpp
//  CS2 Project Step 1
//
//  Created by Mohamed Azouz on 10/05/2023.
//

#ifndef DEQ_hpp
#define DEQ_hpp

#include <stdio.h>
#include <iostream>

#endif /* DEQ_hpp */

using namespace std;

template <class T>
class DEQ
{
private:
  struct Node
    {
      Node* next;
      T data;
  };
    Node* head;
    Node* tail;
public:
    DEQ()
    {
        head = NULL;
        tail = head;
    }
    ~DEQ()
    {
        while(head != NULL)
        {
            Node* temp = new Node;
            temp = head;
            head = head->next;
            delete temp;
        }
    }
    bool DEQisEmpty()
    {
        if(head != NULL)
            return true;
        return false;
    }
    void Add_Front(T d)
    {
        Node* temp = new Node;
        temp->data = d;
        temp->next = head;
        head = temp;
        if(head->next==NULL)
            tail = head;
    }
    void Add_Rear(T d)
    {
        Node* temp = new Node;
        temp->data = d;
        temp->next = NULL;
        tail->next = temp;
        tail = tail->next;
        if(head == NULL)
            head = tail;
    }
    void Remove_Front()
    {
        Node* temp;
        temp = head;
        head = head->next;
        delete temp;
    }
    void Remove_Rear()
    {
        Node *temp;
        temp = tail;
        tail = head;
        while(tail->next != temp)
        {
            tail = tail->next;
        }
        tail->next = NULL;
        delete temp;
    }
    Node* View_Front()
    {
        return head;
    }
    Node* View_Rear()
    {
        return tail;
    }
    int DEQ_Length()
    {
        Node*temp;
        int count=0;
        temp = head;
        while(temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        delete temp;
        return count;
    }
};
