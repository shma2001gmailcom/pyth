#ifndef MATRIX_H
#define MATRIX_H

#include <string>
#include "Row.h"

using namespace std;

class Matrix {
public:
    Matrix();

    Matrix(Row, Row);

    virtual ~Matrix();

    Matrix(const Matrix &other);

    Matrix &operator=(const Matrix &other);

    Row Getfirst() {
        return first;
    }

    void Setfirst(Row val) {
        first = val;
    }

    Row Getsecond() {
        return second;
    }

    void Setsecond(Row val) {
        second = val;
    }

    Matrix *mult(Matrix *another);

    void print();

    string toString();

protected:
private:
    Row first;
    Row second;
};

#endif // MATRIX_H
