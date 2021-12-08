#ifndef OPTIONS10_H
#define OPTIONS10_H

#include "binModel02.hpp"
#include "binLattice.hpp"

//exeercice 4.4
template <typename Option>
double priceByCRR(BinModel model, Option option)
{
    if (option.isValidN())
    {
        double q = model.riskNeutProb();
        int N = option.getN();
        std::vector<double> Price(N + 1);

        for (int i = 0; i <= N; i++)
        {
            Price[i] = option.payoff(model.S(N, i));
        }

        for (int n = N - 1; n >= 0; n--)
        {
            for (int i = 0; i <= n; i++)
            {
                Price[i] = (q * Price[i + 1] + (1 - q) * Price[i]) / (1 + model.getR());
            }
        }

        return Price[0];
    }

    else
    {
        std::cout << "ERROR with steps to expiry." << std::endl;
        return -1;
    }
}

template <typename Option>
double priceBySnell(BinModel model, BinLattice<double> &priceTree, BinLattice<bool> &stoppingTree, Option option)
{
    if (option.isValidN())
    {
        double q = model.riskNeutProb();
        int N = option.getN();
        priceTree.setN(N);
        stoppingTree.setN(N);
        double contVal(0);

        for (int i = 0; i <= N; i++)
        {
            priceTree.setNode(N, i, option.payoff(model.S(N, i)));
            stoppingTree.setNode(N, i, 1);
        }

        for (int n = N - 1; n >= 0; n--)
        {
            for (int i = 0; i <= n; i++)
            {
                contVal = (q * priceTree.getNode(n, i + 1) + (1 - q) * priceTree.getNode(n, i)) / (1 + model.getR());
                priceTree.setNode(n, i, option.payoff(model.S(n, i)));

                if (contVal > priceTree.getNode(n, i))
                {
                    priceTree.setNode(n, i, contVal);
                    stoppingTree.setNode(n, i, 0);
                }

                else if (priceTree.getNode(n, i) == 0.)
                {
                    stoppingTree.setNode(n, i, 0);
                }
            }
        }

        return priceTree.getNode(0, 0);
    }

    else
    {
        std::cout << "ERROR with steps to expiry." << std::endl;
        return -1;
    }
}

class Call5
{
private:
    int N;
    double K;

public:
    int getN()
    {
        return N;
    }

    void setN(int N)
    {
        this->N = N;
    }

    void setK(double K)
    {
        this->K = K;
    }

    void getInputData();

    double payoff(double z);

    bool isValidK()
    {
        return (K > 0);
    }

    bool isValidN()
    {
        return (N > 0);
    }

    bool isValid()
    {
        return (isValidK() && isValidN());
    }
};

class Put5
{
private:
    int N;
    double K;

public:
    int getN()
    {
        return N;
    }

    void setN(int N)
    {
        this->N = N;
    }

    void setK(double K)
    {
        this->K = K;
    }

    double getK()
    {
        return K;
    }

    void getInputData();

    double payoff(double z);

    bool isValidK()
    {
        return (K > 0);
    }

    bool isValidN()
    {
        return (N > 0);
    }

    bool isValid()
    {
        return (isValidK() && isValidN());
    }
};

#endif