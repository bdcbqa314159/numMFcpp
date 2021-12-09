#ifndef PATHDEPOPTIONS01_H
#define PATHDEPOPTIONS01_H

#include "bsModel01.hpp"
//Here we only add pricingError, no need to write a whole new script for this.
//Same for delta.

class PathDepOption
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

class ArithmAsianCall : public PathDepOption
{
public:
    double K;
    ArithmAsianCall(double T, double K, int m) : K(K)
    {
        this->T = T;
        this->m = m;
    }

    double payoff(std::vector<double> &S);
};

//exercise23 (exercise 5.1)
class EurCall : public PathDepOption
{
public:
    double K;
    EurCall(double T, double K, int m) : K(K)
    {
        this->T = T;
        this->m = m;
    }

    double payoff(std::vector<double> &S);
};

class EurPut : public PathDepOption
{
public:
    double K;
    EurPut(double T, double K, int m) : K(K)
    {
        this->T = T;
        this->m = m;
    }

    double payoff(std::vector<double> &S);
};

#endif