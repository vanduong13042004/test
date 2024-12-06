#include <iostream>

using namespace std;

struct Node {
  int data;
  Node *next;
};

Node *head = NULL;

void insert(int x) {
  Node *newNode = new Node;
  newNode->data = x;
  newNode->next = head;
  head = newNode;
}



