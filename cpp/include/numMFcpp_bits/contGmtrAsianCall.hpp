#ifndef CONTGMTRASIANCALL_H
#define CONTGMTRASIANCALL_H
#include "pathDepOptions02.hpp"

class ContGmtrAsianCall : public PathDepOption
{
public:
    double K;

    ContGmtrAsianCall(double T, double m, double K) : PathDepOption(T, m), K(K)
    {
    }

    double payoff(std::vector<double> &S);
    double priceByBSFormula(BSModel model);
};

#endif