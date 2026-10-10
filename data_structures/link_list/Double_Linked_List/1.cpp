#include <iostream>
using namespace std;

struct Node {
  int Data;
  Node *nextNode;
  Node *prevNode;
};

void transverse(Node *head) {
  cout << "NULL <-> ";
  for (Node *temp = head; temp != nullptr; temp = temp->nextNode) {
    cout << "[" << temp->Data << "] <-> ";
  }
  cout << "NULL" << endl;
}

void heading(string title) {
  cout << "\n==================== " << title << " ====================\n";
}

int main() {

  Node *head = new Node({3, nullptr, nullptr});
  Node *first = new Node({7, nullptr, nullptr});
  Node *second = new Node({4, nullptr, nullptr});
  Node *third = new Node({5, nullptr, nullptr});
  Node *fourth = new Node({6, nullptr, nullptr});
  Node *position = new Node({8, nullptr, nullptr});

  head->nextNode = second;
  second->nextNode = third;
  third->nextNode = nullptr;

  head->prevNode = nullptr;
  second->prevNode = head;
  third->prevNode = second;
  heading("Original Linked List");
  transverse(head);

  // Insertion at the end
  heading("Insertion at the End");
  Node *temp = head;
  while (temp->nextNode != nullptr) {
    temp = temp->nextNode;
  }
  temp->nextNode = fourth;
  fourth->prevNode = temp;
  fourth->nextNode = nullptr;
  transverse(head);

  // Insertion at the Start
  heading("Insertion at the Start");
  first->nextNode = head;
  first->prevNode = nullptr;
  head->prevNode = first;
  head = first;
  transverse(head);

  // Insertion at a Fixed Position
  heading("Insertion at a Fixed Position");
  int pos;
  cout << "Enter the position after which you want to insert: ";
  cin >> pos;
  cout << "\n";
  temp = head;
  for (int i = 1; i < pos && temp != nullptr; i++) {
    temp = temp->nextNode;
  }
  if (temp == nullptr) {
    cout << "Invalid position!" << endl;
  } else {
    position->nextNode = temp->nextNode;
    temp->nextNode->prevNode = position;
    temp->nextNode = position;
    position->prevNode = temp;
    transverse(head);
  }

  // Deletion at the end
  heading("Deletion at the End");
  temp = head;
  while (temp->nextNode != NULL) {
    temp = temp->nextNode;
  }
  temp->prevNode->nextNode = NULL;
  delete temp;
  transverse(head);

  // Deletion at the Start
  heading("Deletion at the Start");
  temp = head;
  temp->nextNode->prevNode = nullptr;
  head = temp->nextNode;
  delete temp;
  transverse(head);

  // Deletion at a Fixed Position
  heading("Deletion at a Fixed Position");
  cout << "Enter the position after which you want to delete: ";
  cin >> pos;
  cout << "\n";
  temp = head;
  for (int i = 1; i < pos && temp != nullptr; i++) {
    temp = temp->nextNode;
  }
  temp->prevNode->nextNode = temp->nextNode;
  if (temp->nextNode != NULL)
    temp->nextNode->prevNode = temp->prevNode;
  delete temp;

  transverse(head);
  return 0;
}