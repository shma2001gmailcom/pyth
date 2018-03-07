#include "../include/Matrix.h"

Matrix *getMatrix(const Row &f, const Row &s)
{
    return new Matrix(f, s);
}
