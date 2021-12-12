#ifndef BSMODEL02_H
#define BSMODEL02_H

#include "matrix.hpp"
#include "bsModel01.hpp"

Vector gauss(int d);

class BSModeld
{

public:
    Vector S0, sigma;
    Matrix C;
    double r;

    BSModeld(Vector S0, double r, Matrix C);
    void generatePathSample(double T, int m, Matrix &S);
};

#endif