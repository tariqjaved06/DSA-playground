#include <iostream>
#include <string>
using namespace std;

struct Node {
  int Data;
  Node *nextNode;
  Node *prevNode;
};

// Prints the list forward AND backward, plus size, head and tail:
//   Forward : NULL <-> [ 3 ] <-> [ 4 ] <-> [ 5 ] <-> NULL
//   Backward: NULL <-> [ 5 ] <-> [ 4 ] <-> [ 3 ] <-> NULL
//   Size: 3   Head: 3   Tail: 5
// Printing backward is a quick way to check that every prevNode link is right.
void traverse(Node *head) {
  if (head == nullptr) {
    cout << "  (empty list)" << endl;
    return;
  }

  int size = 0;
  Node *tail = nullptr;

  cout << "  Forward : NULL <-> ";
  for (Node *temp = head; temp != nullptr; temp = temp->nextNode) {
    cout << "[ " << temp->Data << " ] <-> ";
    tail = temp;
    size++;
  }
  cout << "NULL" << endl;

  cout << "  Backward: NULL <-> ";
  for (Node *temp = tail; temp != nullptr; temp = temp->prevNode) {
    cout << "[ " << temp->Data << " ] <-> ";
  }
  cout << "NULL" << endl;

  cout << "  Size: " << size << "   Head: " << head->Data
       << "   Tail: " << tail->Data << endl;
}

// Prints a boxed, centered heading
void heading(string title) {
  int width = 54;
  int space = width - 2 - static_cast<int>(title.size());
  int left = space / 2;
  int right = space - left;
  cout << "\n+" << string(width - 2, '-') << "+\n";
  cout << "|" << string(left, ' ') << title << string(right, ' ') << "|\n";
  cout << "+" << string(width - 2, '-') << "+\n";
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

  heading("ORIGINAL DOUBLY LINKED LIST");
  traverse(head);

  // Insertion at the End
  heading("INSERTION AT THE END");
  Node *temp = head;
  while (temp->nextNode != nullptr) {
    temp = temp->nextNode;
  }
  temp->nextNode = fourth;
  fourth->prevNode = temp;
  fourth->nextNode = nullptr;
  cout << "  Inserted 6 at the end\n\n";
  traverse(head);

  // Insertion at the Start
  heading("INSERTION AT THE START");
  first->nextNode = head;
  first->prevNode = nullptr;
  head->prevNode = first;
  head = first;
  cout << "  Inserted 7 at the start\n\n";
  traverse(head);

  // Insertion at a Fixed Position
  heading("INSERTION AT A FIXED POSITION");
  int pos;
  cout << "  Enter the position after which you want to insert: ";
  cin >> pos;
  cout << "\n";
  temp = head;
  for (int i = 1; i < pos && temp != nullptr; i++) {
    temp = temp->nextNode;
  }
  if (pos < 1 || temp == nullptr) {
    cout << "  [!] Invalid position!" << endl;
  } else {
    position->nextNode = temp->nextNode;
    position->prevNode = temp;
    if (temp->nextNode != nullptr) { // temp might be the last node
      temp->nextNode->prevNode = position;
    }
    temp->nextNode = position;
    cout << "  Inserted 8 after position " << pos << "\n\n";
    traverse(head);
  }

  // Deletion at the End
  heading("DELETION AT THE END");
  temp = head;
  while (temp->nextNode != nullptr) {
    temp = temp->nextNode;
  }
  cout << "  Deleted " << temp->Data << " from the end\n\n";
  temp->prevNode->nextNode = nullptr;
  delete temp;
  traverse(head);

  // Deletion at the Start
  heading("DELETION AT THE START");
  temp = head;
  cout << "  Deleted " << temp->Data << " from the start\n\n";
  temp->nextNode->prevNode = nullptr;
  head = temp->nextNode;
  delete temp;
  traverse(head);

  // Deletion at a Fixed Position
  heading("DELETION AT A FIXED POSITION");
  cout << "  Enter the position of the node you want to delete: ";
  cin >> pos;
  cout << "\n";
  temp = head;
  for (int i = 1; i < pos && temp != nullptr; i++) {
    temp = temp->nextNode;
  }
  if (pos < 1 || temp == nullptr) {
    cout << "  [!] Invalid position!" << endl;
  } else {
    cout << "  Deleted " << temp->Data << " at position " << pos << "\n\n";
    if (temp->prevNode != nullptr) {
      temp->prevNode->nextNode = temp->nextNode;
    } else {
      head = temp->nextNode; // deleting the head
    }
    if (temp->nextNode != nullptr) { // temp might be the last node
      temp->nextNode->prevNode = temp->prevNode;
    }
    delete temp;
    traverse(head);
  }

  return 0;
}