#ifndef PATHDEPOPTIONS01_H
#define PATHDEPOPTIONS01_H

#include "bsModel01.hpp"

class PathDepOption
{
public:
    double T;
    int m;
    double priceByMC(BSModel model, long N);
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

#endif