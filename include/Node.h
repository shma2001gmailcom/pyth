#ifndef NODE_H
#define NODE_H
#include "Matrix.h"


class Node
{
    public:
        Node();
        Node(Matrix* c);
        virtual ~Node();
        Node(const Node& other);
        Matrix* getContent() { return content; }
        void setContent(Matrix* val) { content = val; }
        Node* getNodeU() { return nodeU; }
        void setNodeU(Node* val) { nodeU = val; }
        Node* getNodeL() { return nodeL; }
        void setNodeL(Node* val) { nodeL = val; }
        Node* nextU();
        Node* nextL();
        void print();
    protected:
    private:
        Matrix* content;
        Node* nodeU;
        Node* nodeL;
};

#endif // NODE_H
