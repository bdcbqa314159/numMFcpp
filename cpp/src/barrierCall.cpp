#include "../include/numMFcpp_bits/barrierCall.hpp"

double BarrierCall::payoff(std::vector<double> &S)
{
    for (int i = 0; i < m; i++)
    {
        if (S[i] > L)
            return 0;
    }

    return (S[m - 1] - K) * (S[m - 1] > K);
}