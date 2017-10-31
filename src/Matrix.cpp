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

Matrix *Matrix::mult(Matrix *another) {
    Row *row1 = new Row
            (
                    first.Getone() * another->first.Getone() + first.Gettwo() * another->Getsecond().Getone(),
                    first.Getone() * another->first.Gettwo() + first.Gettwo() * another->Getsecond().Gettwo()
            );
    auto *result = new Matrix();
    result->Setfirst(*row1);
    delete row1;
    Row *row2 = new Row
            (
                    second.Getone() * another->first.Getone() + second.Gettwo() * another->Getsecond().Getone(),
                    second.Getone() * another->first.Gettwo() + second.Gettwo() * another->Getsecond().Gettwo()
            );
    result->Setsecond(*row2);
    delete row2;
    return result;
}

void Matrix::print() {
    cout << toString() << endl;
}

string Matrix::toString() {
    return "||" + ToString(first.Getone()) + "  " + ToString(first.Gettwo()) + "||\n||" + ToString(second.Getone()) +
           "  " + ToString(second.Gettwo()) + "||\n";
}

