#include <iostream>
#include "Matrix.h"
#include "MatrixFactory.h"
#include "UL.h"
#include "Node.h"
#include "Queue.h"

using namespace std;
int main()
{
    Node* u0 = new Node(UL::getU());
    Node* l0 = new Node(UL::getL());
    Queue* q = new Queue;
    q->push(*u0);
    delete u0;
    u0 = 0;
    q->push(*l0);
    delete l0;
    l0 = 0;
    for(int i = 0; i < 4; ++i)
    {
        Node node = q->pop();
        node.print();
        q->push(*(node.nextU()));
        q->push(*(node.nextL()));
        cout<<q->size()<<endl;
    }
    q->pop().print();
    return 0;
}
