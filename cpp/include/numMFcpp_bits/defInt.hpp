#ifndef DEFINT_H
#define DEFINT_H

#include <cmath>

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

template <typename T>
class MyTInt
{

private:
    double a;
    double b;
    T Myf;

public:
    MyTInt(double a, double b, T Myf) : a(a), b(b), Myf(Myf)
    {
    }

    double ByTrapezoid(int N);
    double BySimpson(int N);
};

template <typename T>
double MyTInt<T>::ByTrapezoid(int N)
{
    double h = (b - a) / N;

    double ans = 0;
    int coeff = 1;
    for (int i = 0; i <= N; i++)
    {

        if (i == 0 || i == N)
        {
            coeff = 1;
        }

        else
        {
            coeff = 2;
        }

        ans += coeff * Myf.f(a + i * h);
    }

    return h * ans / 2;
}

template <typename T>
double MyTInt<T>::BySimpson(int N)
{
    double h = (b - a) / N;
    double ans = Myf.f(a);
    for (int n = 1; n < N; n++)
    {
        ans += 4 * Myf.f(a + n * h - 0.5 * h) + 2 * Myf.f(a + n * h);
    }

    ans += 4 * Myf.f(b - 0.5 * h) + Myf.f(b);
    return ans * h / 6;
}

#endif