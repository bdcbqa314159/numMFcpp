#ifndef BSMODEL01_H
#define BSMODEL01_H

#include <vector>

double gauss();

class BSModel
{

public:
    double S0, r, sigma;

    BSModel(double S0, double r, double sigma) : S0(S0), r(r), sigma(sigma)
    {
        std::srand(std::time(0));
    }

    void generatePathSample(double T, int m, std::vector<double> &S);
};

#endif