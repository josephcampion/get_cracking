#include <iostream>
#include "Node.h"
using namespace std;


Node::Node(int d) {
    // cout << "Node constructed." << endl;
    Node* next = NULL;
    // TODO: make this a doubly linked list:
    // Node* prev = NULL;
    data = d;
}

void Node::appendToTail(int d) {
    Node* end = new Node(d);
    Node* curr = this;
    // cout << "this->data: " << this->data << endl;
    // cout << "n.next = " << n.next << endl;

    while (curr->next != NULL) {
        curr = curr->next;
        cout << "found next" << endl;
    }

    curr->next = end;
}

Node* Node::deleteNode(int d) {
    if (this == NULL) { return NULL; }
    Node* curr = this;

    if (curr->data == d) {
        return this->next; /* moved head */
    }

    while (curr->next != NULL) {
        if (curr->next->data == d) {
            curr->next = curr->next->next;
            return this; /* head didn't change */
        }
        curr = curr->next;
    }

    return this;
}

// void Node::removeDuplicates() {

// }

void Node::printLinkedList() {

    Node* curr = this;
    int id = 0;
    cout << "(HEAD-" << id << ": " << curr->data << ")->";

    while (curr->next != NULL) {
        curr = curr->next;
        id++;
        cout << "(" << id << ", " << curr->data << ")->";
    }
    cout << "NULL" << endl << endl;
}