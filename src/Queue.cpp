#include "../include/Queue.h"

Queue::Queue() = default;

Queue::~Queue() = default;

void Queue::push(Node n) {
    nodes.push_front(n);
}

Node Queue::pop() {
    Node result = Node(nodes.back());
    nodes.pop_back();
    return result;
}


int Queue::size() {
    return static_cast<int>(nodes.size());
}

void Queue::pushBoth(Node n) {
    Node *nextL = n.nextL();
    push(*nextL);
    delete nextL;
    Node *nextU = n.nextU();
    push(*nextU);
    delete nextL;
}
