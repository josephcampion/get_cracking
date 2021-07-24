#include "Node.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    cout << "Test constructor and print method:" << endl;
    Node n(3);
    n.printLinkedList();

    cout << endl;
    cout << "Test appendToTail method and print longer list:" << endl;
    n.appendToTail(5);
    n.appendToTail(8);
    n.printLinkedList();

    cout << endl;
    cout << "Test deleteNode by data method:" << endl;
    Node* head = n.deleteNode(5);
    n = *head;
    n.printLinkedList();

    cout << endl;
    cout << "Test removeDuplicates method:" << endl;
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

    cout << "Test return kth from last:" << endl;
    int k = 3;
    Node* kthFromLast = x.returnKthToLast(k);
    kthFromLast->printLinkedList();

    return 0;
}