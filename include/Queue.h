#ifndef PROCESSSTACK_H
#define PROCESSSTACK_H

#include <list>
#include "Node.h"

using namespace std;

class Queue {
public:
    virtual ~Queue();

    void push(Node n);

    void pushBoth(Node n);

    Node pop();

    int size();

    Queue();

protected:
private:
    std::list<Node> nodes;
};

#endif // PROCESSSTACK_H
