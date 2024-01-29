#ifndef SINGLY_LL
#define SINGLY_LL

#include <iostream>

class Node
{
  public:
    int data;
    Node *next;

    Node();

    Node(int _data);
};

void insertBeg(Node** headRef, int newData);

void insertLast(Node** headRef, int newData);

void insertNewValue(Node** headRef, int newData, int n);

void removeElement(Node** headRef, int remValue); 

void printList(Node *node);

#endif