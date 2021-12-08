#ifndef OPTIONS08_H
#define OPTIONS08_H

#include "binModel02.hpp"

class Option
{

private:
    int N;

public:
    void setN(int N)
    {
        this->N = N;
    }

    bool isValidN()
    {
        return (N > 0);
    }

    int getN()
    {
        return N;
    }

    virtual double payoff(double z) = 0;
};

class EurOption : public virtual Option
{

public:
    double priceByCRR(BinModel model);
};

class AmOption : public virtual Option
{

public:
    double priceBySnell(BinModel model);
};

class Call : public EurOption, public AmOption
{
private:
    double K;

public:
    void setK(double K)
    {
        this->K = K;
    }

    void getInputData();

    double payoff(double z);

    bool isValidK()
    {
        return (K > 0);
    }
};

class Put : public EurOption, public AmOption
{
private:
    double K;

public:
    void setK(double K)
    {
        this->K = K;
    }

    double getK()
    {
        return K;
    }

    void getInputData();

    double payoff(double z);

    bool isValidK()
    {
        return (K > 0);
    }
};

#endif