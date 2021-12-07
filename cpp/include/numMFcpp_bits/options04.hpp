#ifndef OPTIONS04_H
#define OPTIONS04_H

#include "binModel02.hpp"

double priceByCRR(BinModel model, int N, double K, double (*payoff)(double z, double K));

double putPayoff(double z, double K);

#endif