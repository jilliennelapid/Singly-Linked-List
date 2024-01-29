// Creating a Singly Linked List.
// the -> operator is similar to the dot operator
#include <iostream>
/*
using namespace std;

class Node
{
  public:
    int data;
    Node *next;

    Node()
    {
      data = 0;
      next = NULL;
    }
    
    Node(int _data)
    {
      this->data = _data;
      this->next = NULL;
    }
};

void insertBeg(Node** headRef, int newData)
{
  // Allocate node into the Heap
  /// This will eventually be inserted into the linked list.
  Node* newNode = new Node();

  // Put the data into the node
  newNode->data = newData;

  // Make pointer of newNode equal to the memory location of the current head node.
  // This will have newNode point to the current head node.
  // newNode will then be at the front of the list, and therefore be the new head node.
  newNode-> next = (*headRef);

  // Make the HEAD point to the new node.
  (*headRef) = newNode;
}

void insertLast(Node** headRef, int newData)
{
  // Allocate node into the Heap.
  /// This will eventually be inserted into the linked list.
  Node* newNode = new Node();

  // Put the data into the node.
  newNode->data = newData;

  // Access the existing list via the head pointer.
  Node* current = *headRef;

  // Interate to the last node before end node (NULL).
  while(current != NULL)
  {
    if(current->next == NULL)        // If the next node is NULL, we are at the correct node,
    {
      break;                         // therefore, break out of the loop.
    }

    current = current->next;         // Else, advance to the next node to check.
  }

  // Set the pointer of the 2nd to last node equal to newNode,
  // therefore pointing to newNode.
  current->next = newNode;

  // Set the pointer of newNode equal to NULL,
  // therefore having newNode point to the end node (NULL).
  newNode->next = NULL;
}

// Inserts into desired position in linked list, where the HEAD node is
// at position 1 and the following nodes count up (2, 3, 4, 5, ...).
void insertNewValue(Node** headRef, int newData, int n)
{
  // Allocated a node into the Heap and add desired data into the node.
  Node* newNode = new Node();
  newNode->data = newData;

  // Access the current linked list via the HEAD.
  Node* current = *headRef;

  // Iterate through said list to get to desired inserting position.
  for(int i = 1; i < n-1; i++)
  {
    current = current->next; 
  }

  // if-else to check if inserting at the end of the list or not.
  // If inserting into a position where the following node is not NULL:
  if(current->next != NULL)
  {
    newNode->next = current->next;
  }
  // else, then newNode is being inserted before NULL and therefore must point to it.
  else
  {
    newNode->next = NULL;
  }

  // Update the node before newNode to point to it.
  current->next = newNode;
  
}

// remove an element from the linked list
void removeElement(Node** headRef, int remValue) 
{
    Node* prev = NULL; // Starting before the head node
    Node* current = *headRef; // the first valid node, the head node
  
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
                 << ".\n";
          
            prev = current; 
            current = current->next; // go to next value
        }
    }

    // if we reached end of list or the list is empty
    if(current == NULL) 
    {
        cout << "Can't remove value: no match found.\n"; 
    } 
    else 
    {
        cout << "Value found!"
             << endl
             << "Deleting: " 
             << current->data 
             << endl;
      
        prev->next = current->next; // unlink the node you remove
      
        delete current; // delete the node
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


int main()
{
  // Create an empty linked list
  Node* head = NULL;

  // Insert 6 at the beginning of the list.
  /// 6 -> NULL (6 replaces the empty value at beginning of the list, which was NULL).
  /// Memory address of the head variable is passed into the function.
  insertBeg(&head, 6);
  printList(head);
  
  insertBeg(&head, 8);
  printList(head);
  
  insertLast(&head, 10);
  printList(head);

  insertNewValue(&head, 9, 4);
  printList(head);

  insertLast(&head, 21);
  printList(head);
  
  return 0;
}
*/
