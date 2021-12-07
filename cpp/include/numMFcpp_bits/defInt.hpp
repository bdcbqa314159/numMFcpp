#ifndef DEFINT_H
#define DEFINT_H

class DefInt
{

private:
    double a;
    double b;
    double (*f)(double x);

public:
    DefInt(double a, double b, double (*f)(double x)) : a(a), b(b), f(f)
    {
    }

    double ByTrapezoid(int N);
    double BySimpson(int N);
};

class NumInt
{

private:
    double a;
    double b;

public:
    NumInt(double a, double b) : a(a), b(b) {}
    virtual double f(double x) = 0;
    double ByTrapezoid(int N);
    double BySimpson(int N);
};

//This can be done in the test as a function interfaced by NumInt class
class NumIntFunc : public NumInt
{
public:
    NumIntFunc(double a, double b) : NumInt(a, b)
    {
    }
    double f(double x)
    {
        return x * x;
    }
};

#endif