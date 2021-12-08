#ifndef BINMODEL02_H
#define BINMODEL02_H

class BinModel
{
private:
    double S0;
    double U;
    double D;
    double R;

public:
    BinModel();
    BinModel(double S0, double U, double D, double R);
    ~BinModel();
    double riskNeutProb();
    double S(int n, int i);
    void getInputData();
    double getR();
    bool isArbitrage();
    bool isInvalidData();
};

#endif