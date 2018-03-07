#ifndef MATRIX_H
#define MATRIX_H

#include <string>
#include "Row.h"

using namespace std;

class Matrix
{
public:
    Matrix();

    Matrix(Row, Row);

    virtual ~Matrix();

    Matrix(const Matrix &other);

    Matrix &operator=(const Matrix &other);

    Matrix *times(Matrix *another);

    void print();

    string toString();

protected:
private:
    Row first;
    Row second;
};

#endif // MATRIX_H
