#include "../include/numMFcpp_bits/bsModel01.hpp"

#include <iostream>
#include <cmath>

const double pi = 4. * atan(1.);

double gauss()
{
    double u1 = (std::rand() + 1) / (RAND_MAX + 1.);
    double u2 = (std::rand() + 1) / (RAND_MAX + 1.);

    return sqrt(-2. * log(u1)) * cos(2. * pi * u2);
}

void BSModel::generatePathSample(double T, int m, std::vector<double> &S)
{
    if (S.size() != m)
    {
        S.resize(m);
    }

    double St = S0;
    for (int i = 0; i < m; i++)
    {
        S[i] = St * exp((r - pow(sigma, 2) * 0.5) * (T / m) + sigma * sqrt(T / m) * gauss());
        St = S[i];
    }
}