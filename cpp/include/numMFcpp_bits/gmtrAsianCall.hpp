#ifndef GMTRASIANCALL_H
#define GMTRASIANCALL_H
#include "pathDepOptions02.hpp"

class GmtrAsianCall : public PathDepOption
{
public:
    double K;

    GmtrAsianCall(double T, double m, double K) : PathDepOption(T, m), K(K)
    {
    }

    double payoff(std::vector<double> &S);
    double priceByBSFormula(BSModel model);
};

#endif