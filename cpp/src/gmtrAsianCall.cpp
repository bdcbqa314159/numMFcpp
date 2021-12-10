#include "../include/numMFcpp_bits/gmtrAsianCall.hpp"
#include "../include/numMFcpp_bits/eurCall.hpp"

#include <iostream>
#include <cmath>

double GmtrAsianCall::payoff(std::vector<double> &S)
{
    double prod = 1.;

    for (int i = 0; i < m; i++)
    {
        prod *= S[i];
    }

    return (pow(prod, 1. / m) - K) * (pow(prod, 1. / m) > K);
}

double GmtrAsianCall::priceByBSFormula(BSModel model)
{
    double a(0), b(0);

    a = model.S0 * exp(-model.r * T + (((m + 1.) * T) / (2. * m)) * (model.r + 0.5 * pow(model.sigma, 2) * ((2. * m + 1.) / (3. * m) - 1)));

    b = model.sigma * sqrt(((m + 1.) * (2. * m + 1.) / (6 * m * m)));

    EurCall1 G(T, K);
    price = G.priceByBSFormula(a, b, model.r);
    return price;
}
