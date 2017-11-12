#include <iostream>
#include "../include/Node.h"
#include "../include/UL.h"

using namespace std;

Node::Node() = default;

Node::Node(Matrix *c) {
    content = c;
}

Node::~Node()
= default;

Node::Node(const Node &other) {
    content = other.content;
    nodeU = other.nodeU;
    nodeL = other.nodeL;
}

void Node::print() {
    if (content != nullptr) content->print();
    if (nodeU != nullptr) nodeU->print();
    if (nodeL != nullptr) nodeL->print();
}

Node *Node::nextU() {
    auto *u = new Node();
    u->setContent(content->times(UL::getU()));
    u->setNodeL(nullptr);
    u->setNodeU(nullptr);
    return u;
}

Node *Node::nextL() {
    auto *l = new Node();
    l->setContent(content->times(UL::getL()));
    l->setNodeL(nullptr);
    l->setNodeU(nullptr);
    return l;
}
