#include "../include/Matrix.h"

Matrix *matrice(const Row &f, const Row &s) {
    return new Matrix(f, s);
}
