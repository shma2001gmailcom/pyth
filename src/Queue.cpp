#include "Queue.h"

Queue::Queue() {}

Queue::~Queue()
{
    //dtor
}

void Queue::push(Node n)
{
    nodes.push_front(n);
}

Node Queue::pop()
{
    Node result = Node(nodes.back());
    nodes.pop_back();
    return result;
}

int Queue::size()
{
    return nodes.size();
}
