#include "../include/numMFcpp_bits/bsModel01.hpp"
#include "../include/numMFcpp_bits/bsModel02.hpp"

#include <iostream>
#include <cmath>

Vector gauss(int d)
{
    Vector Z(d);
    for (int i = 0; i < d; i++)
    {
        Z[i] = gauss();
    }

    return Z;
}

BSModeld::BSModeld(Vector S0, double r, Matrix C) : S0(S0), r(r), C(C)
{
    std::srand(std::time(0));
    int d = S0.size();
    sigma.resize(d);

    for (int i = 0; i < d; i++)
    {
        sigma[i] = sqrt(C[i] ^ C[i]);
    }
}

void BSModeld::generatePathSample(double T, int m, Matrix &S)
{
    Vector St = S0;
    int d = S0.size();

    for (int i = 0; i < m; i++)
    {
        S[i] = St * exp((T / m) * (r + (-0.5) * sigma * sigma) + sqrt(T / m) * (C * gauss(d)));
        St = S[i];
    }
}