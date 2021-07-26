#ifndef NODE_H
#define NODE_H

#include <vector>

class Node
{
    private:
    Node* next;
    int data;
    int size;

    public:
    Node(int d);
    int getData() { return this->data; }
    void appendToTail(int d);
    Node* deleteNode(int d);
    void removeDuplicates();
    Node* returnKthToLast(int k);
    void deleteMiddleNode(Node* node);
    Node* partition(int x);
    Node sumLists(Node* other);
    bool isPalindrome();
    Node makeIntersection(std::vector<int> added_values);
    Node* intersection(Node* other);
    Node* makeLoop(int d);
    Node* detectLoop();
    void printLinkedList();
    // Node deleteNode(Node head, int d);

};

#endif // NODE_H