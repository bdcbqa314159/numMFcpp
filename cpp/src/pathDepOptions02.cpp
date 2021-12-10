#include "../include/numMFcpp_bits/eurCall.hpp"
#include "../include/numMFcpp_bits/pathDepOptions01.hpp"
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

double PathDepOption::priceByMC(BSModel model, long N, double epsilon)
{
    double H(0), Hsq(0), Heps(0);
    std::vector<double> S(m);

    for (int i = 0; i < N; i++)
    {
        model.generatePathSample(T, m, S);
        H = (i * H + payoff(S)) / (i + 1.);
        Hsq = (i * Hsq + pow(payoff(S), 2)) / (i + 1.);
        rescale(S, 1. + epsilon);
        Heps = (i * Heps + payoff(S)) / (i + 1.);
    }
    price = exp(-model.r * T) * H;
    pricingError = exp(-model.r * T) * sqrt(Hsq - H * H) / sqrt(N - 1);
    delta = exp(-model.r * T) * (Heps - H) / (epsilon * model.S0);

    return price;
}

double PathDepOption::priceByVarRedMC(BSModel model, long N, PathDepOption &cvOption)
{
    DifferenceOfOptions VarRedOpt(T, m, this, &cvOption);
    price = VarRedOpt.priceByMC(model, N) + cvOption.priceByBSFormula(model);

    pricingError = VarRedOpt.pricingError;
    return price;
}

double PathDepOption::priceByVarRedMC(BSModel model, long N, PathDepOption &cvOption, double epsilon)
{
    DifferenceOfOptions VarRedOpt(T, m, this, &cvOption);
    price = VarRedOpt.priceByMC(model, N, epsilon) + cvOption.priceByBSFormula(model);
    delta = VarRedOpt.priceByMC(model, N) + cvOption.deltaByBSFormula(model);

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

double EurCall::d_plus(double S0, double sigma, double r)
{
    return (log(S0 / K) + (r + 0.5 * pow(sigma, 2)) * T) / (sigma * sqrt(T));
}

double EurCall::d_minus(double S0, double sigma, double r)
{
    return d_plus(S0, sigma, r) - sigma * sqrt(T);
}

double EurCall::priceByBSFormula(double S0, double sigma, double r)
{
    return S0 * N(d_plus(S0, sigma, r)) - K * exp(-r * T) * N(d_minus(S0, sigma, r));
}

double EurCall::deltaByBSFormula(double S0, double sigma, double r)
{

    return N(d_plus(S0, sigma, r));
}

double EurCall::priceByBSFormula(BSModel model)
{
    return priceByBSFormula(model.S0, model.sigma, model.r);
}

double EurCall::deltaByBSFormula(BSModel model)
{
    return deltaByBSFormula(model.S0, model.sigma, model.r);
}

double EurCall::vegaByBSFormula(double S0, double sigma, double r)
{
    double pi = 4.0 * atan(1.0);
    return (pi / sqrt(2 * pi)) * S0 * exp(-pow(d_plus(S0, sigma, r), 2) / 2);
}

double EurCall::payoff(std::vector<double> &S)
{
    return (S[m - 1] - K) * (S[m - 1] > K);
}