#ifndef NODE_H
#define NODE_H

class Node
{
    private:
    Node* next;
    int data;

    public:
    Node(int d);
    void appendToTail(int d);
    Node* deleteNode(int d);
    void printLinkedList();
    // Node deleteNode(Node head, int d);

};

#endif // NODE_H