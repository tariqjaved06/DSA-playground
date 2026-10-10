#include <iostream>
using namespace std;

struct Node {
  int Data;
  Node *nextNode;
};

void transverse(Node *head) {
  for (Node *temp = head; temp != nullptr; temp = temp->nextNode) {
    cout << "[" << temp->Data << "] -> ";
  }
  cout << "NULL" << endl;
}

void heading(string title) {
  cout << "\n==================== " << title << " ====================\n";
}

int main() {

  Node *head = new Node({3, nullptr});
  Node *first = new Node({7, nullptr});
  Node *second = new Node({4, nullptr});
  Node *third = new Node({5, nullptr});
  Node *fourth = new Node({6, nullptr});
  Node *position = new Node({8, nullptr});

  head->nextNode = second;
  second->nextNode = third;
  third->nextNode = nullptr;

  heading("Original Linked List");
  transverse(head);

  // Insertion at the end
  heading("Insertion at the End");
  Node *temp = head;
  while (temp->nextNode != nullptr) {
    temp = temp->nextNode;
  }
  temp->nextNode = fourth;
  fourth->nextNode = nullptr;
  transverse(head);

  // Insertion at the Start
  heading("Insertion at the Start");
  first->nextNode = head;
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
    temp->nextNode = position;
    transverse(head);
  }

  // Deletion at the end
  heading("Deletion at the End");
  temp = head;
  while (temp->nextNode->nextNode != nullptr) {
    temp = temp->nextNode; // stop at the second-last node
  }
  delete temp->nextNode;    // 1) free the last node FIRST
  temp->nextNode = nullptr; // 2) then cut the link
  transverse(head);

  // Deletion at the Start
  heading("Deletion at the Start");
  temp = head;
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
  if (temp == nullptr || temp->nextNode == nullptr) {
    cout << "Invalid position!" << endl; // no node exists after this position
  } else {
    Node *target = temp->nextNode;     // the node we want to delete
    temp->nextNode = target->nextNode; // 1) skip over it
    delete target;                     // 2) then free it
    transverse(head);
  }

  return 0;
}