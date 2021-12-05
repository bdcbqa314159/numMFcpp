#include "../include/numMFcpp_bits/binModel01.hpp"

#include <iostream>
#include <cmath>

double riskFreeProbability(double R, double U, double D)
{

    if (U != D)
    {
        return (R - D) / (U - D);
    }

    else
    {
        std::cout << "ERROR" << std::endl;
        return -1.;
    }
}

double S(double S0, double U, double D, double R, int n, int i)
{
    return S0 * pow(1 + U, i) * pow(1 + D, n - i);
}

void getDataInputs(double &S0, double &U, double &D, double &R)
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
}

void getDataInputs(double *S0, double *U, double *D, double *R)
{
    std::cout << "===Enter data===" << std::endl;
    std::cout << "S0 >> ";
    std::cin >> *S0;
    std::cout << "U >> ";
    std::cin >> *U;
    std::cout << "D >> ";
    std::cin >> *D;
    std::cout << "R >> ";
    std::cin >> *R;
}

bool isInvalidData(double S0, double U, double D, double R)
{

    return (S0 <= 0. || U <= -1 || D <= -1 || U <= D || R <= -1);
}

bool isArbitrage(double U, double D, double R)
{

    return (R >= U || R <= D);
}