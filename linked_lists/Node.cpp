#include <iostream>
#include <vector>
#include <algorithm>
#include "Node.h"
using namespace std;


Node::Node(int d) {
    // cout << "Node constructed." << endl;
    Node* next = NULL;
    this->next = NULL; /* not sure why this is necessary, but it helps */
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

void Node::removeDuplicates() {
    vector<int> allData;

    Node* curr = this;

    allData.push_back(this->data);

    while (curr->next != NULL) {

        int nextData = curr->next->data;

        if (find(allData.begin(), allData.end(), nextData) != allData.end()) {
            curr->next = curr->next->next;
        } else {
            allData.push_back(nextData);
            curr = curr->next;
        }
    }
}

void Node::printLinkedList() {

    Node* curr = this;
    cout << "(HEAD " << curr->data << ")->";

    while (curr->next != NULL) {
        curr = curr->next;
        cout << "(" << curr->data << ")->";
    }
    cout << "NULL" << endl << endl;
}