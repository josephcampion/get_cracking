#include "Node.h"
#include <cstdlib>
#include <iostream>
#include <vector>

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

    cout << endl;
    cout << "Test return kth from last:" << endl;
    int k = 1;
    Node* kthFromLast = x.returnKthToLast(k);
    kthFromLast->printLinkedList();
    
    cout << endl;
    cout << "Test deleting middle node given only pointer to node:" << endl;
    x.printLinkedList();
    x.deleteMiddleNode(kthFromLast);
    x.printLinkedList();

    cout << endl;
    cout << "Test partition:" << endl;
    Node y(3);
    vector<int> v = {5,8,5,10,2,1};
    for (auto vi: v) {
        y.appendToTail(vi);
    }
    y.printLinkedList();
    y.partitiion(5);


    return 0;
}