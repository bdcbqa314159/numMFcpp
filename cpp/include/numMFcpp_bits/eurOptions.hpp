#ifndef EUROPTIONS_H
#define EUROPTIONS_H

#include "options06.hpp"

class DigitCall : public EurOption2
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

class DigitPut : public EurOption2
{
private:
    int K;

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

class BullSpread : public EurOption2
{
private:
    double K1;
    double K2;

public:
    void setKs(double K1, double K2)
    {
        this->K1 = K1;
        this->K2 = K2;
    }

    double getK1()
    {
        return K1;
    }

    double getK2()
    {
        return K2;
    }

    void getInputData();

    double payoff(double z);

    bool isValidKs()
    {
        return (K1 > 0 && K1 < K2);
    }
};

class BearSpread : public EurOption2
{
private:
    double K1;
    double K2;

public:
    void setKs(double K1, double K2)
    {
        this->K1 = K1;
        this->K2 = K2;
    }

    double getK1()
    {
        return K1;
    }

    double getK2()
    {
        return K2;
    }

    void getInputData();

    double payoff(double z);

    bool isValidKs()
    {
        return (K1 > 0 && K1 < K2);
    }
};

class DoubDigital : public EurOption2
{
private:
    double K1;
    double K2;

public:
    void setKs(double K1, double K2)
    {
        this->K1 = K1;
        this->K2 = K2;
    }

    double getK1()
    {
        return K1;
    }

    double getK2()
    {
        return K2;
    }

    void getInputData();

    double payoff(double z);

    bool isValidKs()
    {
        return (K1 > 0 && K1 < K2);
    }
};

class Strangle : public EurOption2
{
private:
    double K1;
    double K2;

public:
    void setKs(double K1, double K2)
    {
        this->K1 = K1;
        this->K2 = K2;
    }

    double getK1()
    {
        return K1;
    }

    double getK2()
    {
        return K2;
    }

    void getInputData();

    double payoff(double z);

    bool isValidKs()
    {
        return (K1 > 0 && K1 < K2);
    }
};

class Butterfly : public EurOption2
{
private:
    double K1;
    double K2;

public:
    void setKs(double K1, double K2)
    {
        this->K1 = K1;
        this->K2 = K2;
    }

    double getK1()
    {
        return K1;
    }

    double getK2()
    {
        return K2;
    }

    void getInputData();

    double payoff(double z);

    bool isValidKs()
    {
        return (K1 > 0 && K1 < K2);
    }
};

#endif