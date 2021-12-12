#ifndef EURBASKETCALL_H
#define EURBASKETCALL_H

#include "pathDepOptions03.hpp"

class EurBasketCall : public PathDepOptiond
{

public:
    double K;
    EurBasketCall(double T, double K, int m)
    {
        this->T = T;
        this->K = K;
        this->m = m;
    }

    double payoff(Matrix &S);
};

#endif