#include "../include/numMFcpp_bits/sumEuroCalls.hpp"
#include "../include/numMFcpp_bits/eurCall.hpp"

#include <iostream>
#include <cmath>

double SumEuroCalls::payoff(Matrix &S)
{
    int d = S[0].size();

    double sum = 0.;
    for (int i = 0; i < d; i++)
    {
        if (S[m - 1][i] > K[i])
        {
            sum += S[m - 1][i] - K[i];
        }
    }

    return sum;
}

double SumEuroCalls::priceByBSFormula(BSModeld model)
{
    int d = model.S0.size();
    double sum(0);

    for (int i = 0; i < d; i++)
    {
        EurCall1 G(T, K[i]);

        sum += G.priceByBSFormula(model.S0[i], model.sigma[i], model.r);
    }

    return sum;
}