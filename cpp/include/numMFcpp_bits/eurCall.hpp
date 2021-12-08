#ifndef EURCALL_H
#define EURCALL_H

class EurCall
{

public:
    double T, K;

    EurCall(double T, double K) : T(T), K(K)
    {
    }

    double d_plus(double S0, double sigma, double r);
    double d_minus(double S0, double sigma, double r);

    double priceByBSFormula(double S0, double sigma, double r);
    double vegaByBSFormula(double S0, double sigma, double r);

    bool isValid()
    {
        return (T > 0 && K > 0);
    }
};
#endif