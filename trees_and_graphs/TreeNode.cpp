

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

#include "TreeNode.h"

// using namespace std;


TreeNode::TreeNode(int d) {
    Node* next = NULL;
    this->next = NULL; /* not sure why this is necessary, but it helps */
    // TODO: make this a doubly linked list:
    // Node* prev = NULL;
    data = d;
    // TODO: keep track of size of linked list:
    // size = 1;
}

