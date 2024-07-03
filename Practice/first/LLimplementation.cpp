#include <iostream>
using namespace std;

class node
{

public:
  int data;
  node *next;

  node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

void print(node *&head)
{
  node *temp = head;

  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

// Function to insert at the begining of the linked list

void insertAtHead(node *&head, int d)
{
  node *temp = new node(d);
  temp->next = head;
  head = temp;
}

// Function to insert at the end of the linked list

void insertAtTail(node *&tail, int d)
{
  node *temp = new node(d);
  tail->next = temp;
  tail = temp;
}

void insertAtMiddle(int position, node *&head, int d)
{
  node *temp = new node(d);
  node *curr = head;

  // if the position is first
  if (position == 1)
  {
    temp->next = head;
    head = temp;
  }
  int count = 1;

  while (count < position - 1)
  {
    curr = curr->next;
    count++;

    // if the position is the last position of the linked list

    if (count == position)
    {
      curr->next = temp;
      curr = temp;
    }
  }

  temp->next = curr->next;
  curr->next = temp;
}

int main()
{

  node *n1 = new node(5);
  node *head = n1;
  node *tail = n1;

  cout << head->data << endl;
  cout << tail->data << endl;

  // Inserting a new node at the begining of the Linked List

  insertAtHead(head, 2);
  insertAtHead(head, 3);
  insertAtHead(head, 4);

  print(head);

  // Inserting a new node at the ending of the linked list

  insertAtTail(tail, 6);
  insertAtTail(tail, 7);
  insertAtTail(tail, 8);

  print(head);

  // Inserting at the middle of the linked list

  insertAtMiddle(4, head, 1);
  insertAtMiddle(9, head, 9);

  print(head);

  return 0;
}