#include "../include/numMFcpp_bits/contGmtrAsianCall.hpp"
#include "../include/numMFcpp_bits/eurCall.hpp"

#include <iostream>
#include <cmath>

double ContGmtrAsianCall::payoff(std::vector<double> &S)
{
    double ans = 0;

    for (int i = 0; i < m; i++)
    {
        ans = (i * ans + log(S[i])) / (i + 1);
    }

    ans = exp(ans);
    return (ans - K) * (ans > K);
}

double ContGmtrAsianCall::priceByBSFormula(BSModel model)
{
    double a(0), b(0);

    a = model.S0 * exp(-T * (model.r + pow(model.sigma, 2) / 6) / 2);
    b = model.sigma / sqrt(3);
    EurCall1 G(T, K);
    price = G.priceByBSFormula(a, b, model.r);
    return price;
}
