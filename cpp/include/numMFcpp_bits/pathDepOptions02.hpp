#ifndef PATHDEPOPTIONS02_H
#define PATHDEPOPTIONS02_H

#include "bsModel01.hpp"

class PathDepOption
{
public:
    double T, price, pricingError, delta;
    int m;

    PathDepOption(double T, int m) : T(T), m(m)
    {
    }

    double priceByMC(BSModel model, long N);
    double priceByMC(BSModel model, long N, double epsilon);
    double priceByVarRedMC(BSModel model, long N, PathDepOption &cvOption);
    double priceByVarRedMC(BSModel model, long N, PathDepOption &cvOption, double epsilon);
    virtual double payoff(std::vector<double> &S) = 0;
    virtual double priceByBSFormula(BSModel model) { return 0.; }
    virtual double deltaByBSFormula(BSModel model) { return 0.; }
};

class DifferenceOfOptions : public PathDepOption
{
public:
    PathDepOption *p1;
    PathDepOption *p2;

    DifferenceOfOptions(double T, int m, PathDepOption *p1, PathDepOption *p2) : PathDepOption(T, m), p1(p1), p2(p2)
    {
    }

    double payoff(std::vector<double> &S)
    {
        return p1->payoff(S) - p2->payoff(S);
    }
};

class ArithmAsianCall : public PathDepOption
{
public:
    double K;
    ArithmAsianCall(double T, double K, int m) : PathDepOption(T, m), K(K)
    {
    }

    double payoff(std::vector<double> &S);
};

class EurCall : public PathDepOption
{
public:
    double K;

    EurCall(double T, int m, double K) : PathDepOption(T, m), K(K)
    {
    }

    double d_plus(double S0, double sigma, double r);
    double d_minus(double S0, double sigma, double r);

    double priceByBSFormula(double S0, double sigma, double r);
    double deltaByBSFormula(double S0, double sigma, double r);
    double vegaByBSFormula(double S0, double sigma, double r);

    double priceByBSFormula(BSModel model);
    double deltaByBSFormula(BSModel model);

    double payoff(std::vector<double> &S);
};

#endif