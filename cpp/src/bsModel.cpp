#include "../include/numMFcpp_bits/bsModel.hpp"

#include <iostream>
#include <cmath>

BSModel1::BSModel1() : S0(0), sigma(0), U(0), D(0), R(0), T(0), N(0)
{
}

BSModel1::~BSModel1()
{
}

bool BSModel1::isValidN()
{
    return N > 0;
}

bool BSModel1::isValidS0()
{
    return S0 > 0;
}

bool BSModel1::isValidSigma()
{
    return sigma > 0;
}

bool BSModel1::isValidT()
{
    return T > 0;
}

bool BSModel1::isValid()
{
    return (isValidN() && isValidS0() && isValidSigma() && isValidT());
}

void BSModel1::getInputData()
{
    std::cout << "===Enter data===" << std::endl;
    std::cout << "S0 >> ";
    std::cin >> S0;
    std::cout << "r >> ";
    std::cin >> r;
    std::cout << "sigma >> ";
    std::cin >> sigma;
    std::cout << "T >> ";
    std::cin >> T;
    std::cout << "N >> ";
    std::cin >> N;

    if (isValid())
    {
        std::cout << "All good" << std::endl;
        return;
    }

    else
    {
        std::cout << "ERROR - check inputs:)" << std::endl;
        return;
    }
}

BinModel BSModel1::approxBinModel()
{

    if (isValid())
    {
        double h = T / N;
        U = exp((r + pow(sigma, 2) / 2) * h + sigma * sqrt(h)) - 1;
        D = exp((r + pow(sigma, 2) / 2) * h - sigma * sqrt(h)) - 1;
        R = exp(r * h) - 1;
        BinModel binModel(S0, U, D, R);
        return binModel;
    }

    else
    {
        BinModel binModel;
        std::cout << "ERROR - the data is not valid this binomial Model has all params at 0" << std::endl;
        return binModel;
    }
}
