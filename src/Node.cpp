#include "Node.h"
#include <iostream>
#include "UL.h"

using namespace std;

Node::Node() {}

Node::Node(Matrix* c)
{
    content = c;
}

Node::~Node()
{

}

Node::Node(const Node& other)
{
    content = other.content;
    nodeU = other.nodeU;
    nodeL = other.nodeL;
}

void Node::print()
{
    if (content != 0) content->print();
    else cout<<"content: null ";
    if (nodeU != 0) nodeU->print();
    else cout<<"nodeU: null ";
    if (nodeL != 0) nodeL->print();
    else cout<<"nodeL: null\n";
}

Node* Node::nextU()
{
    Node* u = new Node();
    u->setContent(content->mult(UL::getU()));
    u->setNodeL(0);
    u->setNodeU(0);
    return u;
}

Node* Node::nextL()
{
    Node* l = new Node();
    l->setContent(content->mult(UL::getL()));
    l->setNodeL(0);
    l->setNodeU(0);
    return l;
}
