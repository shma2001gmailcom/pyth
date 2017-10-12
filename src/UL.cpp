#include "UL.h"
#include "Matrix.h"
#include "MatrixFactory.h"

Matrix* UL::u = 0;
Matrix* UL::l = 0;

Matrix* UL::getU()
{
    if(u == 0)
    {
        Row* r1 = new Row(1, 2);
        Row* r2 = new Row(0, 1);
        u = matrice(*r1, *r2);
        delete r1;
        r1 = 0;
        delete r2;
        r2 = 0;
    }
    return u;
}

Matrix* UL::getL()
{
    if(l == 0)
    {
        Row* r1 = new Row(1, 0);
        Row* r2 = new Row(2, 1);
        l = matrice(*r1, *r2);
        delete r1;
        r1 = 0;
        delete r2;
        r2 = 0;
    }
    return l;
}

UL::UL() {}

