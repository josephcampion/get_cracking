#include <iostream>
#include "Node.h"
using namespace std;


Node::Node(int d) {
    // cout << "Node constructed." << endl;
    Node* next = NULL;
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
    cout << "curr->next = " << curr->next << endl;
    curr->next = end;
    cout << "curr->next = " << curr->next << endl;
    cout << "curr->next->data = " << curr->next->data << endl;
    cout << endl;
}

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