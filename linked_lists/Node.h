#ifndef NODE_H
#define NODE_H

class Node
{
    private:
    Node* next;
    int data;
    int size;

    public:
    Node(int d);
    void appendToTail(int d);
    Node* deleteNode(int d);
    void removeDuplicates();
    Node* returnKthToLast(int k);
    void printLinkedList();
    // Node deleteNode(Node head, int d);

};

#endif // NODE_H