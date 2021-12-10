#ifndef BARRIERCALL_H
#define BARRIERCALL_H
#include "pathDepOptions02.hpp"

class BarrierCall : public PathDepOption
{
public:
    double K, L;

    BarrierCall(double T, double m, double K, double L) : PathDepOption(T, m), K(K), L(L)
    {
    }

    double payoff(std::vector<double> &S);
};

#endif