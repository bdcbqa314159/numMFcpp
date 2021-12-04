#include "../include/numMFcpp_bits/options01.hpp"
#include "../include/numMFcpp_bits/binModel01.hpp"

#include <iostream>
#include <cmath>

int newtonSymb(int N, int n)
{
    if (n < 0 || n > N)
        return 0;

    int result(1);
    for (int i = 1; i <= n; i++)
    {
        result = result * (N - n + i) / i;
    }

    return result;
}

void getDataInputs(int &N, double &K)
{
    std::cout << "===Enter data===" << std::endl;
    std::cout << "steps to expiry N >> ";
    std::cin >> N;
    std::cout << "strike K >> ";
    std::cin >> K;
}

bool isValid(int N, double K)
{
    return (N > 0 && K > 0);
}

double priceByCRR(double S0, double U, double D, double R, int N, double K)
{
    double q = riskFreeProbability(R, U, D);
    double Price[N + 1];

    for (int i = 0; i <= N; i++)
    {

        Price[i] = callPayoff(S(S0, U, D, R, N, i), K);
    }

    for (int n = N - 1; n >= 0; n--)
    {
        for (int i = 0; i <= n; i++)
        {
            Price[i] = (q * Price[i + 1] + (1 - q) * Price[i]) / (1 + R);
        }
    }

    // // int i = 0;
    // // while (i <= N)
    // // {
    // //     Price[i] = callPayoff(S(S0, U, D, R, N, i), K);
    // //     i++;
    // // }

    // // i = N - 1;
    // // while (i >= 0)
    // // {
    // //     Price[i] = (q * Price[i + 1] + (1 - q) * Price[i]) / (1 + R);
    // //     i--;
    // // }

    return Price[0];
}

double priceByCRRSum(double S0, double U, double D, double R, int N, double K)
{
    double q = riskFreeProbability(R, U, D);

    double price(0);
    double call(0);
    int C_i_N(0);

    for (int i = 0; i <= N; i++)
    {
        call = callPayoff(S(S0, U, D, R, N, i), K);

        C_i_N = newtonSymb(N, i);

        price = price + (C_i_N * pow(q, i) * pow(1 - q, N - i) * call) / pow(1 + R, N);
    }

    return price;
}

double callPayoff(double z, double K)
{
    return 1. * (z >= K);
}