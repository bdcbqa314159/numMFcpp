#ifndef SOLVERS_H
#define SOLVERS_H

#include <cmath>

//Function pointers
double solveByBisection(double (*f)(double x), double tgt, double l, double r, double epsilon)
{
    double a = l;
    double b = r;
    double mid = (a + b) / 2;

    double yl = f(a) - tgt;
    double ymid = f(mid) - tgt;

    while (mid - a > epsilon)
    {
        if ((yl > 0 && ymid > 0) || (yl < 0 && ymid < 0))
        {
            a = mid;
            yl = ymid;
        }

        else
        {
            b = mid;
        }

        mid = (a + b) / 2;
        ymid = f(mid) - tgt;
    }

    return mid;
}

double solveByNR(double (*f)(double x), double (*df)(double x), double tgt, double guess, double epsilon)
{

    double x_prev = guess;
    double x_next = x_prev - (f(x_prev) - tgt) / df(x_prev);

    while (fabs(x_prev - x_next) > epsilon)
    {
        x_prev = x_next;
        x_next = x_prev - (f(x_prev) - tgt) / df(x_prev);
    }

    return x_next;
}

//Classes
class Function
{
public:
    virtual double value(double x) = 0;
    virtual double deriv(double x) = 0;
};

double solveByBisection(Function *f, double tgt, double l, double r, double epsilon)
{
    double a = l;
    double b = r;
    double mid = (a + b) / 2;

    double yl = f->value(a) - tgt;
    double ymid = f->value(mid) - tgt;

    while (mid - a > epsilon)
    {
        if ((yl > 0 && ymid > 0) || (yl < 0 && ymid < 0))
        {
            a = mid;
            yl = ymid;
        }

        else
        {
            b = mid;
        }

        mid = (a + b) / 2;
        ymid = f->value(mid) - tgt;
    }

    return mid;
}

double solveByNR(Function *f, double tgt, double guess, double epsilon)
{

    double x_prev = guess;
    double x_next = x_prev - (f->value(x_prev) - tgt) / f->deriv(x_prev);

    while (fabs(x_prev - x_next) > epsilon)
    {
        x_prev = x_next;
        x_next = x_prev - (f->value(x_prev) - tgt) / f->deriv(x_prev);
    }

    return x_next;
}

template <typename T>
double solveByBisectionT(T *f, double tgt, double l, double r, double epsilon)
{
    double a = l;
    double b = r;
    double mid = (a + b) / 2;

    double yl = f->value(a) - tgt;
    double ymid = f->value(mid) - tgt;

    while (mid - a > epsilon)
    {
        if ((yl > 0 && ymid > 0) || (yl < 0 && ymid < 0))
        {
            a = mid;
            yl = ymid;
        }

        else
        {
            b = mid;
        }

        mid = (a + b) / 2;
        ymid = f->value(mid) - tgt;
    }

    return mid;
}

template <typename T>
double solveByNRT(T *f, double tgt, double guess, double epsilon)
{

    double x_prev = guess;
    double x_next = x_prev - (f->value(x_prev) - tgt) / f->deriv(x_prev);

    while (fabs(x_prev - x_next) > epsilon)
    {
        x_prev = x_next;
        x_next = x_prev - (f->value(x_prev) - tgt) / f->deriv(x_prev);
    }

    return x_next;
}

template <typename T>
double TsolveByBisection(T &f, double tgt, double l, double r, double epsilon)
{
    double a = l;
    double b = r;
    double mid = (a + b) / 2;

    double yl = f.value(a) - tgt;
    double ymid = f.value(mid) - tgt;

    while (mid - a > epsilon)
    {
        if ((yl > 0 && ymid > 0) || (yl < 0 && ymid < 0))
        {
            a = mid;
            yl = ymid;
        }

        else
        {
            b = mid;
        }

        mid = (a + b) / 2;
        ymid = f.value(mid) - tgt;
    }

    return mid;
}

template <typename T>
double TsolveByNR(T &f, double tgt, double guess, double epsilon)
{

    double x_prev = guess;
    double x_next = x_prev - (f.value(x_prev) - tgt) / f.deriv(x_prev);

    while (fabs(x_prev - x_next) > epsilon)
    {
        x_prev = x_next;
        x_next = x_prev - (f.value(x_prev) - tgt) / f.deriv(x_prev);
    }

    return x_next;
}
#endif