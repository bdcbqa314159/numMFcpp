#include "../include/numMFcpp_bits/options01.hpp"
#include "../include/numMFcpp_bits/options02.hpp"
#include "../include/numMFcpp_bits/options03.hpp"
#include "../include/numMFcpp_bits/options04.hpp"
#include "../include/numMFcpp_bits/binModel02.hpp"

#include <iostream>
#include <cmath>

double priceByCRR(BinModel model, int N, double K, double (*payoff)(double z, double K))
{
    double q = model.riskNeutProb();
    double Price[N + 1];

    for (int i = 0; i <= N; i++)
    {
        *(Price + i) = payoff(model.S(N, i), K);
    }

    for (int n = N - 1; n >= 0; n--)
    {
        for (int i = 0; i <= n; i++)
        {
            *(Price + i) = (q * Price[i + 1] + (1 - q) * Price[i]) / (1 + model.getR());
        }
    }

    return Price[0];
}
