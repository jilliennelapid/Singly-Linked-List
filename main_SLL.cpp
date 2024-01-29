#include "singlyLL.h"

int main()
{
  Node* head = NULL;

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