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
    auto *row1 = new Row(first.getOne() * another->first.getOne()
                        + first.getTwo() * another->second.getOne(),
                        first.getOne() * another->first.getTwo()
                        + first.getTwo() * another->second.getTwo());
    auto *result = new Matrix();
    result->first =*row1;
    delete row1;
    auto *row2 = new Row(second.getOne() * another->first.getOne()
                        + second.getTwo() * another->second.getOne(),
                        second.getOne() * another->first.getTwo()
                        + second.getTwo() * another->second.getTwo());
    result->second = *row2;
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

