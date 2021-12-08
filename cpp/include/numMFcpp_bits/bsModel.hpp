#ifndef BSMODEL_H
#define BSMODEL_H

#include "binModel02.hpp"

class BSModel
{
private:
    double S0;
    double sigma;
    double r;
    double U;
    double D;
    double R;
    double T;
    int N;

public:
    BSModel();
    ~BSModel();
    void getInputData();
    bool isValidN();
    bool isValidS0();
    bool isValidSigma();
    bool isValidT();
    bool isValid();
    int getN()
    {
        return N;
    }

    BinModel approxBinModel();
};

#endif