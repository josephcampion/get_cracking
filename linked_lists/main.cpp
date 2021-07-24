#include "Node.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    Node n(3);
    n.printLinkedList();

    n.appendToTail(5);
    n.appendToTail(8);
    // cout << "n.next = " << n.next << endl;
    // cout << "n.next->data = " << n.next->data << endl;
    n.printLinkedList();

    Node* head = n.deleteNode(5);
    n = *head;
    n.printLinkedList();

    /* Testing removeDuplicates */

    Node x(1);
    x.appendToTail(-2);
    x.appendToTail(7);
    x.appendToTail(7);
    x.appendToTail(9);
    x.appendToTail(9);
    x.appendToTail(-2);
    x.appendToTail(6);
    x.appendToTail(-2);
    x.printLinkedList();

    x.removeDuplicates();
    x.printLinkedList();

    return 0;
}