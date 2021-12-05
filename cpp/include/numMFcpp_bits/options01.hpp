#ifndef OPTIONS01_H
#define OPTIONS01_H

void getDataInputs(int &N, double &K);

bool isValid(int N, double K);

double priceByCRR(double S0, double U, double D, double R, int N, double K);

double priceByCRRSum(double S0, double U, double D, double R, int N, double K);

double callPayoff(double z, double K);

int newtonSymb(int N, int n);

double callPayoff(double z, double *K);

#endif