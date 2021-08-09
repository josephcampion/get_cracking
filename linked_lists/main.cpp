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
    Node a(7);
    a.appendToTail(2);
    a.appendToTail(5);
    a.printLinkedList();

    Node b(4);
    b.appendToTail(5);
    b.appendToTail(6);
    b.printLinkedList();

    Node c = a.sumLists(&b);
    cout << "sum of a + b = " << endl;
    c.printLinkedList();

    cout << endl;
    cout << "Test method to check if list is a palindrome:" << endl;
    Node w(1);
    v = {2, 3, 7, 9, 7, 3, 2, 1};
    for (auto vi: v) {
        w.appendToTail(vi);
    }
    w.printLinkedList();
    cout << "is a palindrome: " << w.isPalindrome();
    cout << endl;

    cout << endl;
    cout << "Test intersection: " << endl;

    Node nv(5);
    v = {2, 3, 7, 9};
    for (auto vi: v) {
        nv.appendToTail(vi);
    }
    nv.printLinkedList();

    vector<int> u = {4,3,8};
    Node nu = nv.makeIntersectingNode(u);
    nu.printLinkedList();

    cout << "intersection: " << endl;
    Node* intersection = nv.intersection(&nu);
    intersection->printLinkedList();

    cout << "check other way around: " << endl;
    intersection = nu.intersection(&nv);
    intersection->printLinkedList();

    cout << "Test making loop: " << endl;
    Node* loop = nv.makeLoop(3);
    /* this results in an infinite loop: */
    // loop->printLinkedList();
    Node* loop_start = loop->detectLoop();
    cout << "loop head = " << loop_start->getData() << endl;

    return 0;
}