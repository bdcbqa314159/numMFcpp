#ifndef DIGITALS_H
#define DIGITALS_H

double callDigitalPayoff(double z, double K);

double putDigitalPayoff(double z, double K);

double callDigitalPayoff(double z, double *K);

double putDigitalPayoff(double z, double *K);

void getDataInputs(int *N, int *noParams);

void getDataInputs(int noParams, double *K);

bool isValid(int N, int noParams);

bool isValid(int noParams, double *K);

double doubleDigitalPayoff(double z, double *K);

#endif