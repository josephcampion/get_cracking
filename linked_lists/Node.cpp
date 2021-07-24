#include <iostream>
#include <vector>
#include <algorithm>
#include "Node.h"
using namespace std;


Node::Node(int d) {
    Node* next = NULL;
    this->next = NULL; /* not sure why this is necessary, but it helps */
    // TODO: make this a doubly linked list:
    // Node* prev = NULL;
    data = d;
    // TODO: keep track of size of linked list:
    // size = 1;
}

void Node::appendToTail(int d) {
    Node* end = new Node(d);
    Node* curr = this;

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

Node* Node::returnKthToLast(int k) {
    Node* curr = this;
    Node* kth = this;

    /* go through linked list */
    int nth = 0;
    while (curr->next != NULL) {
        if (nth >= k) {
            kth = kth->next;
        }
        curr = curr->next;
        nth++;
    }
    
    return kth;
}

void Node::deleteMiddleNode(Node* node) {

    if (node->next == NULL) {
        /* node is not in the middle */
        return;
    } else if (node == this) {
        /* node is not in the middle */
        return;
    } else {
        node->data = node->next->data;
        node->next = node->next->next;
    }
}

void Node::printLinkedList() {

    Node* curr = this;
    cout << "(HEAD " << curr->data << ")->";

    while (curr->next != NULL) {
        curr = curr->next;
        cout << "(" << curr->data << ")->";
    }
    cout << "NULL" << endl;
}