#ifndef PATHDEPOPTIONS03_H
#define PATHDEPOPTIONS03_H

#include "bsModel02.hpp"

void rescale(Matrix &S, double x, int j);

class PathDepOptiond
{
public:
    double T, price, pricingError;
    int m;
    Vector delta;
    double priceByMC(BSModeld model, long N);
    double priceByMC(BSModeld model, long N, double epsilon);
    double priceByVarRedMC(BSModeld model, long N, PathDepOptiond &cvOption);
    virtual double payoff(Matrix &S) = 0;
    virtual double priceByBSFormula(BSModeld model) { return 0.0; };
};

class DifferenceOfOptionsd : public PathDepOptiond
{
public:
    PathDepOptiond *p1;
    PathDepOptiond *p2;

    DifferenceOfOptionsd(double T, int m, PathDepOptiond *p1, PathDepOptiond *p2) : p1(p1), p2(p2)
    {
        this->T = T;
        this->m = m;
    }

    double payoff(Matrix &S)
    {
        return p1->payoff(S) - p2->payoff(S);
    }
};

class ArithmAsianCalld : public PathDepOptiond
{
public:
    double K;
    ArithmAsianCalld(double T, double K, int m) : K(K)
    {
        this->T = T;
        this->m = m;
    }

    double payoff(Matrix &S);
};

#endif