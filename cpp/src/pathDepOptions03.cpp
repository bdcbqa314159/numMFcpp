#include "../include/numMFcpp_bits/pathDepOptions03.hpp"

#include <iostream>
#include <cmath>

void rescale(Matrix &S, double x, int j)
{
    int m = S.size();
    for (int i = 0; i < m; i++)
    {
        S[i][j] *= x;
    }
}

double PathDepOptiond::priceByMC(BSModeld model, long N)
{
    double H(0), Hsq(0);
    Matrix S(m);

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

double PathDepOptiond::priceByMC(BSModeld model, long N, double epsilon)
{
    double H(0), Hsq(0);
    Matrix S(m);

    int d = model.S0.size();
    delta.resize(d);
    Vector Heps(d);

    for (int j = 0; j < d; j++)
    {
        Heps[j] = 0.;
    }

    for (int i = 0; i < N; i++)
    {
        model.generatePathSample(T, m, S);
        H = (i * H + payoff(S)) / (i + 1.);
        Hsq = (i * Hsq + pow(payoff(S), 2)) / (i + 1.);

        for (int j = 0; j < d; j++)
        {
            rescale(S, 1. + epsilon, j);
            Heps[j] = (i * Heps[j] + payoff(S)) / (i + 1.);

            if (j < d - 1)
            {
                rescale(S, 1 / (1. + epsilon), j);
            }
        }
    }
    price = exp(-model.r * T) * H;
    pricingError = exp(-model.r * T) * sqrt(Hsq - H * H) / sqrt(N - 1);

    for (int j = 0; j < d; j++)
    {
        delta[j] = exp(-model.r * T) * (Heps[j] - H) / (epsilon * model.S0[j]);
    }

    return price;
}

double PathDepOptiond::priceByVarRedMC(BSModeld model, long N, PathDepOptiond &cvOption)
{
    DifferenceOfOptionsd VarRedOpt(T, m, this, &cvOption);
    price = VarRedOpt.priceByMC(model, N) + cvOption.priceByBSFormula(model);

    pricingError = VarRedOpt.pricingError;
    return price;
}

double ArithmAsianCalld::payoff(Matrix &S)
{
    double average(0);
    int d = S[0].size();
    Vector one(d);

    for (int i = 0; i < d; i++)
    {
        one[i] = 1.;
    }

    for (int k = 0; k < m; k++)
    {
        average = (k * average + (one ^ S[k])) / (k + 1.);
    }

    return (average - K) * (average > K);
}
