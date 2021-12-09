#include "../include/numMFcpp_bits/pathDepOptions01.hpp"

#include <iostream>
#include <cmath>

double PathDepOption::priceByMC(BSModel model, long N)
{
    double H(0);
    std::vector<double> S(m);

    for (int i = 0; i < N; i++)
    {
        model.generatePathSample(T, m, S);
        H = (i * H + payoff(S)) / (i + 1.);
    }

    return exp(-model.r * T) * H;
}

double ArithmAsianCall::payoff(std::vector<double> &S)
{
    double average(0);
    for (int i = 0; i < m; i++)
    {
        average = (i * average + S[i]) / (i + 1.);
    }

    return (average - K) * (average > K);
}
