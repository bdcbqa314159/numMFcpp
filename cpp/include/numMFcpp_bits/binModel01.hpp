#ifndef BINMODEL01_H
#define BINMODEL01_H

double riskFreeProbability(double R, double U, double D);

double S(double S0, double U, double D, double R, int n, int i);

void getDataInputs(double &S0, double &U, double &D, double &R);

bool isInvalidData(double S0, double U, double D, double R);

bool isArbitrage(double U, double D, double R);

#endif