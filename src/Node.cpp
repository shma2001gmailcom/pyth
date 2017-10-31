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
    else cout << "content: null ";
    if (nodeU != nullptr) nodeU->print();
    else cout << "nodeU: null ";
    if (nodeL != nullptr) nodeL->print();
    else cout << "nodeL: null\n";
}

Node *Node::nextU() {
    auto *u = new Node();
    u->setContent(content->mult(UL::getU()));
    u->setNodeL(nullptr);
    u->setNodeU(nullptr);
    return u;
}

Node *Node::nextL() {
    auto *l = new Node();
    l->setContent(content->mult(UL::getL()));
    l->setNodeL(nullptr);
    l->setNodeU(nullptr);
    return l;
}
