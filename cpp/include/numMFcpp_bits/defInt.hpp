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

#endif