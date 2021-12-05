#include "../include/numMFcpp_bits/digitals.hpp"

#include <iostream>
#include <cmath>

double callDigitalPayoff(double z, double K)
{
    return 1. * (z >= K);
}

double putDigitalPayoff(double z, double K)
{
    return 1. * (z < K);
}

double callDigitalPayoff(double z, double *K)
{
    return 1. * (z >= *K);
}

double putDigitalPayoff(double z, double *K)
{
    return 1. * (z < *K);
}

void getDataInputs(int *N, int *noParams)
{
    std::cout << "===Enter data===" << std::endl;
    std::cout << "steps to expiry N >> ";
    std::cin >> *N;

    std::cout << "no. of strikes >> ";
    std::cin >> *noParams;
}

void getDataInputs(int noParams, double *K)
{
    std::cout << "===Enter Strikes===" << std::endl;

    for (int i = 0; i < noParams; i++)
    {
        std::cout << "enter strike >> ";
        std::cin >> *(K + i);
    }
}

bool isValid(int N, int noParams)
{
    return (N > 0 && (noParams >= 1 && noParams <= 2));
}

bool isValid(int noParams, double *K)
{

    for (int i = 0; i < noParams; i++)
    {
        if (*(K + i) < 0)
        {
            return false;
        }
    }

    if (noParams == 2)
    {
        if (*K > *(K + 1))
        {
            return false;
        }
    }

    return true;
}

double doubleDigitalPayoff(double z, double *K)
{
    return 1. * (*K <= z && z <= *(K + 1));
}