#ifndef NODE_H
#define NODE_H

#include "Matrix.h"

class Node
{
public:
    Node();

    explicit Node(Matrix *c);

    virtual ~Node();

    Node(const Node &other);

    void setContent(Matrix *val)
    { content = val; }

    void setNodeU(Node *val)
    { nodeU = val; }

    void setNodeL(Node *val)
    { nodeL = val; }

    Node *nextU();

    Node *nextL();

    void print();

protected:
private:
    Matrix *content;
    Node *nodeU;
    Node *nodeL;
};

#endif // NODE_H
