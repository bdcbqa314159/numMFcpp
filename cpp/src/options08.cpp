#include "../include/numMFcpp_bits/options08.hpp"
#include "../include/numMFcpp_bits/binModel02.hpp"

#include <iostream>
#include <cmath>
#include <vector>

double EurOption4::priceByCRR(BinModel model)
{
    if (isValidN())
    {
        double q = model.riskNeutProb();
        int N = getN();
        std::vector<double> Price(N + 1);

        for (int i = 0; i <= N; i++)
        {
            Price[i] = payoff(model.S(N, i));
        }

        for (int n = N - 1; n >= 0; n--)
        {
            for (int i = 0; i <= n; i++)
            {
                Price[i] = (q * Price[i + 1] + (1 - q) * Price[i]) / (1 + model.getR());
            }
        }

        return Price[0];
    }

    else
    {
        std::cout << "ERROR with steps to expiry." << std::endl;
        return -1;
    }
}

double AmOption2::priceBySnell(BinModel model)
{
    if (isValidN())
    {
        double q = model.riskNeutProb();
        int N = getN();
        std::vector<double> Price(N + 1);
        double contVal(0);

        for (int i = 0; i <= N; i++)
        {
            Price[i] = payoff(model.S(N, i));
        }

        for (int n = N - 1; n >= 0; n--)
        {
            for (int i = 0; i <= n; i++)
            {
                contVal = (q * Price[i + 1] + (1 - q) * Price[i]) / (1 + model.getR());
                Price[i] = payoff(model.S(n, i));
                if (contVal > Price[i])
                {
                    Price[i] = contVal;
                }
            }
        }

        return Price[0];
    }

    else
    {
        std::cout << "ERROR with steps to expiry." << std::endl;
        return -1;
    }
}

void Call4::getInputData()
{
    std::cout << "===Enter data===" << std::endl;
    std::cout << "N >> ";
    int N(0);
    std::cin >> N;
    setN(N);
    std::cout << "K >> ";
    std::cin >> K;

    if (isValidN() && isValidK())
    {
        std::cout << "All good" << std::endl;
        return;
    }

    else
    {
        std::cout << "ERROR - check inputs" << std::endl;
        return;
    }
}

void Put4::getInputData()
{
    std::cout << "===Enter data===" << std::endl;
    std::cout << "N >> ";
    int N(0);
    std::cin >> N;
    setN(N);
    std::cout << "K >> ";
    std::cin >> K;

    if (isValidN() && isValidK())
    {
        std::cout << "All good" << std::endl;
        return;
    }

    else
    {
        std::cout << "ERROR - check inputs" << std::endl;
        return;
    }
}

double Call4::payoff(double z)
{
    return (z - K) * (z > K);
}

double Put4::payoff(double z)
{
    return (K - z) * (z < K);
}