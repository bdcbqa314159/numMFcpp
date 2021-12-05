#include "../include/numMFcpp_bits/options01.hpp"
#include "../include/numMFcpp_bits/options02.hpp"
#include "../include/numMFcpp_bits/options03.hpp"
#include "../include/numMFcpp_bits/binModel01.hpp"

#include <iostream>
#include <cmath>

double priceByCRR(double S0, double U, double D, double R, int N, double K, double (*payoff)(double z, double K))
{
    double q = riskFreeProbability(R, U, D);
    double Price[N + 1];

    for (int i = 0; i <= N; i++)
    {

        *(Price + i) = payoff(S(S0, U, D, R, N, i), K);
    }

    for (int n = N - 1; n >= 0; n--)
    {
        for (int i = 0; i <= n; i++)
        {
            *(Price + i) = (q * Price[i + 1] + (1 - q) * Price[i]) / (1 + R);
        }
    }

    return Price[0];
}

double priceByCRR(double S0, double U, double D, double R, int N, double *Ks, double (*payoff)(double z, double *Ks))
{
    double q = riskFreeProbability(R, U, D);
    double Price[N + 1];

    for (int i = 0; i <= N; i++)
    {

        *(Price + i) = payoff(S(S0, U, D, R, N, i), Ks);
    }

    for (int n = N - 1; n >= 0; n--)
    {
        for (int i = 0; i <= n; i++)
        {
            *(Price + i) = (q * Price[i + 1] + (1 - q) * Price[i]) / (1 + R);
        }
    }

    return Price[0];
}

double putPayoff(double z, double K)
{
    return (K - z) * (z >= K);
}

double putPayoff(double z, double *K)
{
    return (*K - z) * (z >= *K);
}
