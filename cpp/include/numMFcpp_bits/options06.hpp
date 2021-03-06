#ifndef OPTIONS06_H
#define OPTIONS06_H

#include "binModel02.hpp"

class EurOption2
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

class Call2 : public EurOption2
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

class Put2 : public EurOption2
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