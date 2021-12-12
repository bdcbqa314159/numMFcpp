#ifndef SUMEUROCALLS_H
#define SUMEUROCALLS_H

#include "pathDepOptions03.hpp"

class SumEuroCalls : public PathDepOptiond
{
public:
    Vector K;
    SumEuroCalls(double T, int m, Vector K)
    {
        this->T = T;
        this->m = m;
        this->K = K;
    }
    double payoff(Matrix &S);
    double priceByBSFormula(BSModeld model);
};

#endif