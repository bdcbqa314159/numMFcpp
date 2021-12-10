#include "../include/numMFcpp_bits/pathDepOptions01.hpp"

#include <iostream>
#include <cmath>

void getZ(std::vector<double> &S, std::vector<double> &Z, double S0, double r, double sigma, double dt)
{
    int m = S.size();
    Z[0] = (log(S[0] / S0) - (r - pow(sigma, 2) / 2) * dt) / (sigma * sqrt(dt));

    for (int j = 1; j < m; j++)
    {
        Z[j] = (log(S[j] / S[j - 1]) - (r - pow(sigma, 2) / 2) * dt) / (sigma * sqrt(dt));
    }
}

void rescale(std::vector<double> &S, double x)
{
    int m = S.size();
    for (int i = 0; i < m; i++)
    {
        S[i] *= x;
    }
}

void rescale(std::vector<double> &S, std::vector<double> &Z, double S0, double r, double sigma, double dt)
{
    int m = S.size();
    S[0] = S0 * exp((r - pow(sigma, 2) / 2) * dt + sigma * sqrt(dt) * Z[0]);

    for (int j = 1; j < m; j++)
    {
        S[j] = S[j - 1] * exp((r - pow(sigma, 2) / 2) * dt + sigma * sqrt(dt) * Z[j]);
    }
}

double PathDepOption1::priceByMC(BSModel model, long N)
{
    double H(0), Hsq(0);
    std::vector<double> S(m);

    for (int i = 0; i < N; i++)
    {
        model.generatePathSample(T, m, S);
        H = (i * H + payoff(S)) / (i + 1.);
        Hsq = (i * Hsq + pow(payoff(S), 2)) / (i + 1.);
    }
    price = exp(-model.r * T) * H;
    pricingError = exp(-model.r * T) * sqrt(Hsq - H * H) / sqrt(N - 1);

    return price;
}

void disp(std::vector<double> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        std::cout << v[i] << std::endl;
    }
}

double PathDepOption1::priceByMC(BSModel model, long N, double epsilon)
{
    double H(0), Hsq(0);
    double Hdelta(0), Hvega(0), Hgamma(0), Htheta(0), Hrho(0);
    std::vector<double> S(m);
    std::vector<double> Z(m);

    double S0 = model.S0;
    double r = model.r;
    double sigma = model.sigma;
    double dt = T / m;

    for (long i = 0; i < N; i++)
    {
        model.generatePathSample(T, m, S);
        H = (i * H + payoff(S)) / (i + 1.);
        Hsq = (i * Hsq + pow(payoff(S), 2)) / (i + 1.);

        getZ(S, Z, S0, r, sigma, dt);

        rescale(S, Z, S0 * (1 + epsilon), r, sigma, dt);
        Hdelta = (i * Hdelta + payoff(S)) / (i + 1.);
        rescale(S, Z, S0, r * (1 + epsilon), sigma, dt);
        Hrho = (i * Hrho + payoff(S)) / (i + 1.);
        rescale(S, Z, S0, r, sigma * (1 + epsilon), dt);
        Hvega = (i * Hvega + payoff(S)) / (i + 1.);
        rescale(S, Z, S0, r, sigma, dt * (1 + epsilon));
        Htheta = (i * Htheta + payoff(S)) / (i + 1.);
        rescale(S, Z, S0 * (1 - epsilon), r, sigma, dt);
        Hgamma = (i * Hgamma + payoff(S)) / (i + 1.);
    }
    price = exp(-r * T) * H;
    pricingError = exp(-r * T) * sqrt(Hsq - H * H) / sqrt(N - 1);

    delta = exp(-r * T) * (Hdelta - H) / (S0 * epsilon);
    vega = exp(-r * T) * (Hvega - H) / (sigma * epsilon);
    theta = -(exp(-r * T * (1 + epsilon)) * Htheta - exp(-r * T) * H) / (T * epsilon);

    gamma = exp(-r * T) * (Hdelta - 2 * H + Hgamma) / (pow(S0 * epsilon, 2));
    rho = (exp(-r * (1 + epsilon) * T) * Hrho - exp(-r * T) * H) / (r * epsilon);

    return price;
}

double ArithmAsianCall1::payoff(std::vector<double> &S)
{
    double average(0);
    for (int i = 0; i < m; i++)
    {
        average = (i * average + S[i]) / (i + 1.);
    }

    return (average - K) * (average > K);
}

double EurCall2::payoff(std::vector<double> &S)
{

    return (S[m - 1] - K) * (S[m - 1] > K);
}

double EurPut1::payoff(std::vector<double> &S)
{

    return (K - S[m - 1]) * (K > S[m - 1]);
}
