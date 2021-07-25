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
    vector<int> v = {-2,7,7,9,9,-2,6,-2};
    for (auto vi: v) {
        x.appendToTail(vi);
    }
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
    v = {5,8,5,10,2,1};
    for (auto vi: v) {
        y.appendToTail(vi);
    }
    y.printLinkedList();
    Node* z = y.partition(5);
    z->printLinkedList();

    cout << endl;
    cout << "Test summing two nodes:" << endl;
    Node a(1);
    a.appendToTail(2);
    a.appendToTail(3);
    a.printLinkedList();

    Node b(4);
    b.appendToTail(5);
    b.appendToTail(6);
    b.printLinkedList();

    Node c = a.sumLists(&b);
    cout << "sum of a + b = " << endl;
    c.printLinkedList();

    return 0;
}