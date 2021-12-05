#ifndef OPTIONS03_H
#define OPTIONS03_H

double priceByCRR(double S0, double U, double D, double R, int N, double K, double (*payoff)(double z, double K));

double priceByCRR(double S0, double U, double D, double R, int N, double *Ks, double (*payoff)(double z, double *Ks));

double putPayoff(double z, double K);
double putPayoff(double z, double *K);

#endif