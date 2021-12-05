#include "../include/numMFcpp_bits/options01.hpp"
#include "../include/numMFcpp_bits/options02.hpp"
#include "../include/numMFcpp_bits/binModel01.hpp"

#include <iostream>
#include <cmath>

void getDataInputs(int *N, double *K)
{
    std::cout << "===Enter data===" << std::endl;
    std::cout << "steps to expiry N >> ";
    std::cin >> *N;
    std::cout << "strike K >> ";
    std::cin >> *K;
}

double priceByCRR2(double S0, double U, double D, double R, int N, double K)
{
    double q = riskFreeProbability(R, U, D);
    double Price[N + 1];

    for (int i = 0; i <= N; i++)
    {

        *(Price + i) = callPayoff(S(S0, U, D, R, N, i), K);
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
