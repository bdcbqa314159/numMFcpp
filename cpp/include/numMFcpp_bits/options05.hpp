#ifndef OPTIONS05_H
#define OPTIONS05_H

#include "binModel02.hpp"
#include "options01.hpp"
#include "options03.hpp"
#include "options04.hpp"

class EurOption
{
private:
    int N;
    double (*payoff)(double z, double K);

public:
    void setN(int N)
    {
        this->N = N;
    };

    void setPayoff(double (*payoff)(double z, double K))
    {
        this->payoff = payoff;
    }

    double priceByCRR(BinModel model, double K);

    bool isValidN()
    {
        return N > 0;
    }
};

class Call : public EurOption
{
private:
    int K;

public:
    Call()
    {
        setPayoff(callPayoff);
    }

    int getK()
    {
        return K;
    }

    void getInputData();

    bool isValidK()
    {
        return (K > 0);
    }
};

class Put : public EurOption
{
private:
    int K;

public:
    Put()
    {
        setPayoff(putPayoff);
    }

    int getK()
    {
        return K;
    }

    void getInputData();

    bool isValidK()
    {
        return (K > 0);
    }
};

#endif