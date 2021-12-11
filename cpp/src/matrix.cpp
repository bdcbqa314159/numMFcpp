#include "../include/numMFcpp_bits/matrix.hpp"

#include <cmath>

Vector operator*(const Matrix &M, const Vector &V)
{

    int d = V.size();
    Vector U(d);
    double sum(0);
    for (int i = 0; i < d; i++)
    {
        U[i] = 0.;
        for (int j = 0; j < d; j++)
        {
            U[i] += M[i][j] * V[j];
        }
    }

    return U;
}

Vector operator*(const double &a, const Vector &V)
{

    int d = V.size();
    Vector U(d);

    for (int i = 0; i < d; i++)
    {
        U[i] = V[i] * a;
    }

    return U;
}

Vector operator+(const Vector &V, const Vector &W)
{

    int d = V.size();
    Vector U(d);

    for (int i = 0; i < d; i++)
    {
        U[i] = V[i] + W[i];
    }

    return U;
}
Vector operator+(const double &a, const Vector &V)
{
    int d = V.size();
    Vector U(d);

    for (int i = 0; i < d; i++)
    {
        U[i] = V[i] + a;
    }

    return U;
}

Vector operator*(const Vector &V, const Vector &W)
{
    int d = V.size();
    Vector U(d);

    for (int i = 0; i < d; i++)
    {
        U[i] = V[i] * W[i];
    }

    return U;
}

Vector exp(const Vector &V)
{
    int d = V.size();
    Vector U(d);

    for (int i = 0; i < d; i++)
    {
        U[i] = exp(V[i]);
    }

    return U;
}
double operator^(const Vector &V, const Vector &W)
{

    double sum(0);
    for (int i = 0; i < V.size(); i++)
    {
        sum += V[i] * W[i];
    }

    return sum;
}