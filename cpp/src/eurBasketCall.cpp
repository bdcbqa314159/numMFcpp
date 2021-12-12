#include "../include/numMFcpp_bits/eurBasketCall.hpp"

double EurBasketCall::payoff(Matrix &S)
{
    double sum(0);
    int d = S[0].size();

    for (int i = 0; i < d; i++)
    {
        sum += S[m - 1][i];
    }

    return (sum - K) * (sum > K);
}