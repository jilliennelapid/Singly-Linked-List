#include "singlyLL.h"

using namespace std;

Node::Node()
{
  data = 0;
  next = NULL;
}

Node::Node(int _data)
{
  this->data = _data;
  this->next = NULL;
}

void insertBeg(Node** headRef, int newData)
{
  Node* newNode = new Node();

  newNode->data = newData;
  newNode-> next = (*headRef);

  (*headRef) = newNode;
}

void insertLast(Node** headRef, int newData)
{
  Node* newNode = new Node();
  newNode->data = newData;

  Node* current = *headRef;

  while(current != NULL)
  {
    if(current->next == NULL)
    {
      break;
    }

    current = current->next;
  }

  current->next = newNode;
  newNode->next = NULL;
}

void insertNewValue(Node** headRef, int newData, int n)
{
  Node* newNode = new Node();
  newNode->data = newData;

  Node* current = *headRef;

  for(int i = 1; i < n-1; i++)
  {
    current = current->next; 
  }

  if(current->next != NULL)
  {
    newNode->next = current->next;
  }
  else
  {
    newNode->next = NULL;
  }

  current->next = newNode;
}

void removeElement(Node** headRef, int remValue) 
{
    Node* prev = NULL;
    Node* current = *headRef;

    while(current != NULL) 
    {
        if(current->data == remValue) 
        { 
            break; 
        }
        else 
        {
            cout << "Value "  
                 << current->data 
                 << " does not match " 
                 << remValue 
                 << endl;

            prev = current; 
            current = current->next;
        }
    }

    if(current == NULL) 
    {
        cout << "Can't remove value: no match found." 
             << endl; 
    } 
    else 
    {
        cout << "Value found!"
             << endl
             << "Deleting: " 
             << current->data 
             << endl;

        prev->next = current->next;

        delete current;
    }
}

void printList(Node *node)
{
  cout << "Current state of linked list: ";

  while(node != NULL)
  {
    cout << " [" 
         << node->data
         << "]";

    node = node->next;
  }

  cout << endl;
}
