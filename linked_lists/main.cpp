#include "Node.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int d = 3;
    Node n(d);
    n.printLinkedList();

    n.appendToTail(5);
    
    n.appendToTail(8);
    // cout << "n.next = " << n.next << endl;
    // cout << "n.next->data = " << n.next->data << endl;
    n.printLinkedList();

    return 0;
}