#include <iostream>
#include <vector>
#include <set>
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

Node* Node::partition(int x) {

    Node* left = NULL;
    Node* right = NULL;

    Node* curr = this;

    while (curr != NULL) {
        if (curr->data < x) {
            Node* tmp = curr;
            curr = curr->next;
            tmp->next = left;
            left = tmp;
        } else {
            Node* tmp = curr;
            curr = curr->next;
            tmp->next = right;
            right = tmp;
        }
    }

    // if (left != NULL) { left->printLinkedList(); }
    // if (right != NULL) { right->printLinkedList(); }

    // TODO: fix so we don't have to traverse this again
    curr = left;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = right;

    return left;
}


Node Node::sumLists(Node* other) {

    Node* curr_this = this;
    Node* curr_other = other;

    bool carry = false;
    int curr_sum = curr_this->data + curr_other->data;

    Node n(0);

    if (curr_sum >= 10) {
        n.data = (curr_sum % 10);
        carry = true;
    } else {
        n.data = curr_sum;
    }
    

    // TODO: make this work for digits of different size:
    while (curr_this->next != NULL && curr_other->next != NULL) {

        curr_this = curr_this->next;
        curr_other = curr_other->next;

        curr_sum = curr_this->data + curr_other->data;

        if (carry) {
            curr_sum++;
        }

        if (curr_sum >= 10) {
            n.appendToTail(curr_sum % 10);
            carry = true;
        } else {
            n.appendToTail(curr_sum);
            carry = false;
        }
    }

    if (carry) { n.appendToTail(1); }

    return n;
}

bool Node::isPalindrome() {
    vector<int> v;

    Node* curr = this;

    while (curr != NULL) {
        v.push_back(curr->data);
        curr = curr->next;
    }

    int sz = v.size();

    for (int i = 0; i < sz / 2; ++i) {
        if (v[i] != v[sz-i-1]) {
            return false;
        }        
    }

    return true;
}

Node Node::makeIntersectingNode(vector<int> added_values) {

    Node n(added_values[0]);

    for (int i = 1; i < added_values.size(); ++i) {
        n.appendToTail(added_values[i]);
    }
    n.printLinkedList();

    Node* curr = &n;

    while (curr->next != NULL) {
        curr = curr->next;
    }
    // cout << "end value = " << curr->data << endl;
    
    curr->next = this;

    return n;
}

Node* Node::intersection(Node* other) {

    set<Node*> nodes;

    Node* curr = this;

    while (curr != NULL) {
        nodes.insert(curr);
        curr = curr->next;
    }

    curr = other;

    while (curr != NULL) {
        if (nodes.find(curr) != nodes.end()) {
            return curr;
        }
        curr = curr->next;
    }

    return NULL;
}

Node* Node::makeLoop(int d) {

    Node* middle = NULL;
    Node* curr = this;

    while (curr->next != NULL) {
        if (curr->data == d) {
            // cout << "Found data" << endl;
            middle = curr;
        }
        curr = curr->next;
    }

    curr->next = middle;

    return middle;
}

Node* Node::detectLoop() {

    set<Node*> seen;
    Node* curr = this;

    while (curr->next != NULL) {
        if (seen.find(curr) != seen.end()) {
            seen.insert(curr);
        } else {
            return curr;
        }
        curr = curr->next;
    }

    return NULL;
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