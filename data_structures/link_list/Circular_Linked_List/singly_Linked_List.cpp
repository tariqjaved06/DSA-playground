#include <iostream>
#include <string>
using namespace std;

struct Node {
  int Data;
  Node *nextNode;
};

void traverse(Node *head) {
  Node *temp = head;
  do {
    cout << "[" << temp->Data << "] -> ";
    temp = temp->nextNode;
  } while (temp != head);
  cout << "(back to " << head->Data << ")" << endl;
}

void heading(string title) {
  cout << "\n==================== " << title << " ====================\n";
}

int main() {

  Node *head = new Node({3, nullptr});
  Node *first = new Node({7, nullptr}); // Insertion at Start
  Node *second = new Node({4, nullptr});
  Node *third = new Node({5, nullptr});
  Node *fourth = new Node({6, nullptr});   // Insertion at End
  Node *position = new Node({8, nullptr}); // Insertion at Position

  head->nextNode = second;
  second->nextNode = third;
  third->nextNode = head;

  heading("Original Circular Linked List");
  traverse(head);

  // Insertion at the End
  heading("Insertion at the End");
  Node *temp = head;
  while (temp->nextNode != head){
    temp = temp->nextNode;
  }
  temp->nextNode = fourth;
  fourth->nextNode = head;
  traverse(head);

  // Insertion at the Start
  heading("Insertion at the Start");
  temp = head;
  while (temp->nextNode != head) { // we need the last node too
    temp = temp->nextNode;
  }
  first->nextNode = head;
  temp->nextNode = first; // last node now points to the new head
  head = first;
  traverse(head);

  // Insertion at a Fixed Position
  heading("Insertion at a Fixed Position");
  int count = 0; 
  temp = head;
  do {
    count++;
    temp = temp->nextNode;
  } while (temp != head);

  int pos;
  cout << "Enter the position after which you want to insert (1 to " << count
       << "): ";
  cin >> pos;
  cout << "\n";
  if (pos < 1 || pos > count) {
    cout << "Invalid position!" << endl;
  } else {
    temp = head;
    for (int i = 1; i < pos; i++) {
      temp = temp->nextNode;
    }
    position->nextNode = temp->nextNode;
    temp->nextNode = position;
    traverse(head);
  }

  // Deletion at the End
  heading("Deletion at the End");
  temp = head;
  while (temp->nextNode->nextNode != head) {
    temp = temp->nextNode;
  }
  delete temp->nextNode; 
  temp->nextNode = head; 
  traverse(head);

  // Deletion at the Start
  heading("Deletion at the Start");
  temp = head;
  while (temp->nextNode != head) { // find the last node
    temp = temp->nextNode;
  }
  Node *oldHead = head;
  head = head->nextNode;
  temp->nextNode = head; // last node now points to the new head
  delete oldHead;
  traverse(head);

  // Deletion at a Fixed Position
  heading("Deletion at a Fixed Position");
  cout << "Enter the position after which you want to delete: ";
  cin >> pos;
  cout << "\n";
  temp = head;
  for (int i = 1; i < pos && temp->nextNode != head; i++) {
    temp = temp->nextNode;
  }
  if (pos < 1 || temp->nextNode == head) {
    cout << "Invalid position!" << endl; // no node exists after this position
  } else {
    Node *target = temp->nextNode; // the node we want to delete
    temp->nextNode = target->nextNode;
    delete target;
    traverse(head);
  }

  return 0;
}