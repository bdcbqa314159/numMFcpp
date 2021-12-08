#include "../include/numMFcpp_bits/options10.hpp"
#include "../include/numMFcpp_bits/binModel02.hpp"
#include "../include/numMFcpp_bits/binLattice.hpp"

#include <iostream>
#include <cmath>
#include <vector>

void Call5::getInputData()
{
    std::cout << "===Enter data===" << std::endl;
    std::cout << "N >> ";
    int N(0);
    std::cin >> N;
    setN(N);
    std::cout << "K >> ";
    std::cin >> K;

    if (isValid())
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

void Put5::getInputData()
{
    std::cout << "===Enter data===" << std::endl;
    std::cout << "N >> ";
    int N(0);
    std::cin >> N;
    setN(N);
    std::cout << "K >> ";
    std::cin >> K;

    if (isValid())
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

double Call5::payoff(double z)
{
    return (z - K) * (z > K);
}

double Put5::payoff(double z)
{
    return (K - z) * (z < K);
}