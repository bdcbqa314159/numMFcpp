#include "../include/numMFcpp_bits/options09.hpp"
#include "../include/numMFcpp_bits/binModel02.hpp"
#include "../include/numMFcpp_bits/binLattice.hpp"

#include <iostream>
#include <cmath>
#include <vector>

double EurOption::priceByCRR(BinModel model)
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

double EurOption::priceByCRR(BinModel model, BinLattice<double> &priceTree, BinLattice<double> &xTree, BinLattice<double> &yTree)
{
    if (isValidN())
    {
        double q = model.riskNeutProb();
        int N = getN();
        priceTree.setN(N);
        xTree.setN(N - 1);
        yTree.setN(N - 1);
        double optionVal(0), xValue(0), yValue(0);

        for (int i = 0; i <= N; i++)
        {
            priceTree.setNode(N, i, payoff(model.S(N, i)));
        }

        for (int n = N - 1; n >= 0; n--)
        {
            for (int i = 0; i <= n; i++)
            {
                optionVal = (q * priceTree.getNode(n, i + 1) + (1 - q) * priceTree.getNode(n, i)) / (1 + model.getR());

                xValue = (priceTree.getNode(n + 1, i + 1) - priceTree.getNode(n + 1, i)) / (model.S(n + 1, i + 1) - model.S(n + 1, i));

                yValue = (optionVal - xValue * model.S(n, i)) / (pow(1 + model.getR(), n));

                priceTree.setNode(n, i, optionVal);
                xTree.setNode(n, i, xValue);
                yTree.setNode(n, i, yValue);
            }
        }

        return priceTree.getNode(0, 0);
    }

    else
    {
        std::cout << "ERROR with steps to expiry." << std::endl;
        return -1;
    }
}

double AmOption::priceBySnell(BinModel model, BinLattice<double> &priceTree, BinLattice<bool> &stoppingTree)
{
    if (isValidN())
    {
        double q = model.riskNeutProb();
        int N = getN();
        priceTree.setN(N);
        stoppingTree.setN(N);
        double contVal(0);

        for (int i = 0; i <= N; i++)
        {
            priceTree.setNode(N, i, payoff(model.S(N, i)));
            stoppingTree.setNode(N, i, 1);
        }

        for (int n = N - 1; n >= 0; n--)
        {
            for (int i = 0; i <= n; i++)
            {
                contVal = (q * priceTree.getNode(n, i + 1) + (1 - q) * priceTree.getNode(n, i)) / (1 + model.getR());
                priceTree.setNode(n, i, payoff(model.S(n, i)));

                if (contVal > priceTree.getNode(n, i))
                {
                    priceTree.setNode(n, i, contVal);
                    stoppingTree.setNode(n, i, 0);
                }

                else if (priceTree.getNode(n, i) == 0.)
                {
                    stoppingTree.setNode(n, i, 0);
                }
            }
        }

        return priceTree.getNode(0, 0);
    }

    else
    {
        std::cout << "ERROR with steps to expiry." << std::endl;
        return -1;
    }
}

void Call::getInputData()
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

void Put::getInputData()
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

double Call::payoff(double z)
{
    return (z - K) * (z > K);
}

double Put::payoff(double z)
{
    return (K - z) * (z < K);
}