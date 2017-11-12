#include <iostream>
#include "../include/Matrix.h"

using namespace std;

Matrix::Matrix() : first(Row()), second(Row()) {};

Matrix::Matrix(Row f, Row s) {
    first = f;
    second = s;
}

Matrix::~Matrix() = default;;

Matrix::Matrix(const Matrix &other) {
    first = other.first;
    second = other.second;
};

Matrix &Matrix::operator=(const Matrix &rhs) {
    if (this == &rhs) return *this;
    return *this;
};

Matrix *Matrix::times(Matrix *another) {
    Row *row1 = new Row(first.getOne() * another->first.getOne()
                        + first.getTwo() * another->getSecond().getOne(),
                        first.getOne() * another->first.getTwo()
                        + first.getTwo() * another->getSecond().getTwo());
    auto *result = new Matrix();
    result->setFirst(*row1);
    delete row1;
    Row *row2 = new Row(second.getOne() * another->first.getOne()
                        + second.getTwo() * another->getSecond().getOne(),
                        second.getOne() * another->first.getTwo()
                        + second.getTwo() * another->getSecond().getTwo());
    result->setSecond(*row2);
    delete row2;
    return result;
}

void Matrix::print() {
    cout << toString() << endl;
}

string Matrix::toString() {
    return "||" + ToString(first.getOne()) + "  " + ToString(first.getTwo()) + "||\n||"
           + ToString(second.getOne()) + "  " + ToString(second.getTwo()) + "||\n";
}

