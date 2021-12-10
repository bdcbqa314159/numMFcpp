#include "../include/numMFcpp_bits/pathDepOptions02.hpp"

#include <iostream>
#include <cmath>

double PathDepOption::priceByMC(BSModel model, long N)
{
    double H(0), Hsq(0);
    std::vector<double> S(m);

    for (int i = 0; i < N; i++)
    {
        model.generatePathSample(T, m, S);
        H = (i * H + payoff(S)) / (i + 1.);
        Hsq = (i * Hsq + pow(payoff(S), 2)) / (i + 1.);
    }
    price = exp(-model.r * T) * H;
    pricingError = exp(-model.r * T) * sqrt(Hsq - H * H) / sqrt(N - 1);

    return price;
}

double PathDepOption::priceByVarRedMC(BSModel model, long N, PathDepOption &cvOption)
{
    DifferenceOfOptions VarRedOpt(T, m, this, &cvOption);
    price = VarRedOpt.priceByMC(model, N) + cvOption.priceByBSFormula(model);

    pricingError = VarRedOpt.pricingError;
    return price;
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
