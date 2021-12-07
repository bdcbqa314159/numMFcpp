#include "../include/numMFcpp_bits/eurOptions.hpp"

#include <iostream>
#include <cmath>

void DigitCall::getInputData()
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

void DigitPut::getInputData()
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

double DigitCall::payoff(double z)
{
    return 1. * (z > K);
}

double DigitPut::payoff(double z)
{
    return 1. * (z < K);
}

void BullSpread::getInputData()
{

    std::cout << "===Enter data===" << std::endl;
    std::cout << "N >> ";
    int N(0);
    std::cin >> N;
    setN(N);
    double k1(0), k2(0);
    std::cout << "K1 >> ";
    std::cin >> k1;
    std::cout << "K2 >> ";
    std::cin >> k2;

    setKs(k1, k2);

    if (isValidN() && isValidKs())
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

void BearSpread::getInputData()
{

    std::cout << "===Enter data===" << std::endl;
    std::cout << "N >> ";
    int N(0);
    std::cin >> N;
    setN(N);
    double k1(0), k2(0);
    std::cout << "K1 >> ";
    std::cin >> k1;
    std::cout << "K2 >> ";
    std::cin >> k2;

    setKs(k1, k2);

    if (isValidN() && isValidKs())
    {
        std::cout << "All good" << std::endl;
        return;
    }

    else
    {
        std::cout << "ERROR - check inputs" << K1 << " " << K2 << std::endl;
        return;
    }
}

void DoubDigital::getInputData()
{

    std::cout << "===Enter data===" << std::endl;
    std::cout << "N >> ";
    int N(0);
    std::cin >> N;
    setN(N);
    double k1(0), k2(0);
    std::cout << "K1 >> ";
    std::cin >> k1;
    std::cout << "K2 >> ";
    std::cin >> k2;

    setKs(k1, k2);

    if (isValidN() && isValidKs())
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

double BullSpread::payoff(double z)
{
    return (z - K1) * (K1 < z && z < K2) + (K2 - K1) * (z >= K2);
}

double BearSpread::payoff(double z)
{
    return (K2 - K1) * (z <= K1) + (K2 - z) * (K1 < z && z <= K2);
}

double DoubDigital::payoff(double z)
{
    return 1. * (z >= K1 && z <= K2);
}