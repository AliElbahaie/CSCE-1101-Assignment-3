#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

#include <iostream>


using namespace std;

struct Node
{
    int value;
    Node* next;
    int numOcurrances;
};

class LinkedList
{
    Node* head;
public:
    LinkedList();
    void addNode(int data);
    void deleteNode(int);
    void printList();
    int sum();


};

#endif