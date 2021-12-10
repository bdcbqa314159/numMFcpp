#ifndef PATHDEPOPTIONS01_H
#define PATHDEPOPTIONS01_H

#include "bsModel01.hpp"
//Here we only add pricingError, no need to write a whole new script for this.
//Same for delta.

class PathDepOption1
{
public:
    double T, price, pricingError, delta, gamma, vega, theta, rho;
    int m;

    void setPricingError(double pricingError)
    {
        this->pricingError = pricingError;
    }

    double priceByMC(BSModel model, long N);
    double priceByMC(BSModel model, long N, double epsilon);
    virtual double payoff(std::vector<double> &S) = 0;
};

class ArithmAsianCall1 : public PathDepOption1
{
public:
    double K;
    ArithmAsianCall1(double T, double K, int m) : K(K)
    {
        this->T = T;
        this->m = m;
    }

    double payoff(std::vector<double> &S);
};

//exercise23 (exercise 5.1)
class EurCall2 : public PathDepOption1
{
public:
    double K;
    EurCall2(double T, double K, int m) : K(K)
    {
        this->T = T;
        this->m = m;
    }

    double payoff(std::vector<double> &S);
};

class EurPut1 : public PathDepOption1
{
public:
    double K;
    EurPut1(double T, double K, int m) : K(K)
    {
        this->T = T;
        this->m = m;
    }

    double payoff(std::vector<double> &S);
};

void rescale(std::vector<double> &S, double x);

#endif