#ifndef UL_H
#define UL_H

#include "Matrix.h"

class UL {
public:
    static Matrix *getU();

    static Matrix *getL();

protected:
private:
    UL();

    static Matrix *u;
    static Matrix *l;
};

#endif // UL_H
