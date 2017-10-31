#include "../include/UL.h"
#include "../include/MatrixFactory.h"

Matrix *UL::u = nullptr;
Matrix *UL::l = nullptr;

Matrix *UL::getU() {
    if (u == nullptr) {
        auto *r1 = new Row(1, 2);
        auto *r2 = new Row(0, 1);
        u = matrice(*r1, *r2);
        delete r1;
        delete r2;
    }
    return u;
}

Matrix *UL::getL() {
    if (l == nullptr) {
        auto *r1 = new Row(1, 0);
        auto *r2 = new Row(2, 1);
        l = matrice(*r1, *r2);
        delete r1;
        delete r2;
    }
    return l;
}

UL::UL() = default;

