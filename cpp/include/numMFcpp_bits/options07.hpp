#ifndef OPTIONS07_H
#define OPTIONS07_H

#include "binModel02.hpp"

class EurOption3
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

class AmOption1
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

class Call3 : public EurOption3, public AmOption1
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
        return (AmOption1::isValidN() && EurOption3::isValidN());
    }

    bool isValidK()
    {
        return (K > 0);
    }
};

class Put3 : public EurOption3, public AmOption1
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
        return (AmOption1::isValidN() && EurOption3::isValidN());
    }

    bool isValidK()
    {
        return (K > 0);
    }
};

#endif