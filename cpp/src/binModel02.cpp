#include "../include/numMFcpp_bits/binModel02.hpp"

#include <iostream>
#include <cmath>

BinModel::BinModel() : S0(0), U(0), D(0), R(0)
{
}

BinModel::BinModel(double S0, double U, double D, double R) : S0(S0), U(U), D(D), R(R)
{
}

BinModel::~BinModel()
{
}

bool BinModel::isInvalidData()
{

    return (S0 <= 0. || U <= -1 || D <= -1 || U <= D || R <= -1);
}

bool BinModel::isArbitrage()
{
    return (R >= U || R <= D);
}

double BinModel::riskNeutProb()
{

    if (!isInvalidData() && !isArbitrage())
    {
        return (R - D) / (U - D);
    }

    else
    {
        std::cout << "ERROR - check inputs" << std::endl;
        return -1.;
    }
}

double BinModel::S(int n, int i)
{
    if (!isInvalidData() && !isArbitrage())
    {
        return S0 * pow(1 + U, i) * pow(1 + D, n - i);
    }

    else
    {
        std::cout << "ERROR - check inputs" << std::endl;
        return -1.;
    }
}

double BinModel::getR()
{
    return R;
}

void BinModel::getInputData()
{
    std::cout << "===Enter data===" << std::endl;
    std::cout << "S0 >> ";
    std::cin >> S0;
    std::cout << "U >> ";
    std::cin >> U;
    std::cout << "D >> ";
    std::cin >> D;
    std::cout << "R >> ";
    std::cin >> R;

    if (isInvalidData() || isArbitrage())
    {
        std::cout << "ERROR - check inputs" << std::endl;
        return;
    }

    else
    {
        std::cout << "All good" << std::endl;
        return;
    }
}
