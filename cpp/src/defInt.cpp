#include "../include/numMFcpp_bits/defInt.hpp"

#include <cmath>

double DefInt::ByTrapezoid(int N)
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

        ans += coeff * f(a + i * h);
    }

    return h * ans / 2;
}

double DefInt::BySimpson(int N)
{
    double h = (b - a) / N;
    double ans = f(a);
    for (int n = 1; n < N; n++)
    {
        ans += 4 * f(a + n * h - 0.5 * h) + 2 * f(a + n * h);
    }

    ans += 4 * f(b - 0.5 * h) + f(b);
    return ans * h / 6;
}
