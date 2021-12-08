#ifndef OPTIONS07_H
#define OPTIONS07_H

#include "binModel02.hpp"

class EurOption
{
private:
    int N;

public:
    void setN(int N)
    {
        this->N = N;
    };

    virtual double payoff(double z) = 0;

    double priceByCRR(BinModel model);

    bool isValidN()
    {
        return (N > 0);
    }
};

class AmOption
{
private:
    int N;

public:
    void setN(int N)
    {
        this->N = N;
    };

    virtual double payoff(double z) = 0;

    double priceBySnell(BinModel model);

    bool isValidN()
    {
        return (N > 0);
    }
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

    bool isValidN()
    {
        return (AmOption::isValidN() && EurOption::isValidN());
    }

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

    bool isValidN()
    {
        return (AmOption::isValidN() && EurOption::isValidN());
    }

    bool isValidK()
    {
        return (K > 0);
    }
};

#endif