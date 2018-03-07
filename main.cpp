#include <iostream>
#include "include/Node.h"
#include "include/Queue.h"
#include "include/UL.h"

void doNodes(Queue *q);

using namespace std;

int main()
{
    auto *u0 = new Node(UL::getU());
    auto *l0 = new Node(UL::getL());
    auto *q = new Queue();
    q->push(*u0);
    delete u0;
    q->push(*l0);
    delete l0;
    for (int i = 0; i < 1000000; ++i, doNodes(q));
    q->pop().print();
    delete q;
    return 0;
}

void doNodes(Queue *q)
{
    Node node = q->pop();
    node.print();
    q->pushBoth(node);
    cout << q->size() << endl;
}
