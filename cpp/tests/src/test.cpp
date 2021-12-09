#include <numMFcpp>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "chapter1.cpp"
#include "chapter2.cpp"

double f1(double x)
{
    return pow(x, 2) - 1;
}

double df1(double x)
{
    return 2 * x;
}

void main15()
{
    double epsilon = 0.001;
    double a = 0;
    double b = 3;
    double tgt = 0;

    std::cout << "Solving by bissection: " << std::endl;
    std::cout << solveByBisection(f1, tgt, a, b, epsilon) << std::endl;

    std::cout << "Solving by Newton & Raphson: " << std::endl;
    std::cout << solveByNR(f1, df1, tgt, 0.5, epsilon) << std::endl;

    return;
}

class func : public Function
{

    double value(double x)
    {
        return pow(x, 2) - 1;
    }

    double deriv(double x)
    {
        return 2 * x;
    }
};

class func_a : public Function
{
    double a;

public:
    func_a(double a) : a(a)
    {
    }

    double value(double x)
    {
        return pow(x, 2) - a;
    }

    double deriv(double x)
    {
        return 2 * x;
    }
};

class G
{

public:
    double value(double x)
    {
        return x * x - 1;
    }

    double deriv(double x)
    {
        return 2 * x;
    }
};

class G_a
{

private:
    double a;

public:
    G_a(double a) : a(a)
    {
    }

    double value(double x)
    {
        return x * x - a;
    }

    double deriv(double x)
    {
        return 2 * x;
    }
};

void main16()
{
    double epsilon = 0.001;
    double a = 0;
    double b = 3;
    double tgt = 0;

    func F;

    std::cout << "Solving by bissection: " << std::endl;
    std::cout << solveByBisection(&F, tgt, a, b, epsilon) << std::endl;

    std::cout << "Solving by Newton & Raphson: " << std::endl;
    std::cout << solveByNR(&F, tgt, 0.5, epsilon) << std::endl;

    func_a F1(2);

    std::cout << "Solving by bissection: " << std::endl;
    std::cout << solveByBisection(&F1, tgt, a, b, epsilon) << std::endl;

    std::cout << "Solving by Newton & Raphson: " << std::endl;
    std::cout << solveByNR(&F1, tgt, 0.5, epsilon) << std::endl;

    return;
}

void main17()
{
    double epsilon = 0.001;
    double a = 0;
    double b = 3;
    double tgt = 0;

    G g;

    std::cout << "Solving by bissection: " << std::endl;
    std::cout << solveByBisectionT(&g, tgt, a, b, epsilon) << std::endl;

    std::cout << "Solving by Newton & Raphson: " << std::endl;
    std::cout << solveByNRT(&g, tgt, 0.5, epsilon) << std::endl;

    G_a g_a(2);

    std::cout << "Solving by bissection: " << std::endl;
    std::cout << solveByBisectionT(&g_a, tgt, a, b, epsilon) << std::endl;

    std::cout << "Solving by Newton & Raphson: " << std::endl;
    std::cout << solveByNRT(&g_a, tgt, 0.5, epsilon) << std::endl;

    return;
}

void exercice19()
{

    //exercice 4.1

    double epsilon = 0.001;
    double a = 0;
    double b = 3;
    double tgt = 0;

    G g;

    std::cout << "Solving by bissection: " << std::endl;
    std::cout << TsolveByBisection(g, tgt, a, b, epsilon) << std::endl;

    std::cout << "Solving by Newton & Raphson: " << std::endl;
    std::cout << TsolveByNR(g, tgt, 0.5, epsilon) << std::endl;

    G_a g_a(2);

    std::cout << "Solving by bissection: " << std::endl;
    std::cout << TsolveByBisection(g_a, tgt, a, b, epsilon) << std::endl;

    std::cout << "Solving by Newton & Raphson: " << std::endl;
    std::cout << TsolveByNR(g_a, tgt, 0.5, epsilon) << std::endl;

    return;
}

class Bond
{
private:
    std::vector<double> C;
    std::vector<double> t;
    double T;
    double F;
    int N;

public:
    Bond() : F(100.), N(3), T(3.)
    {
        C.resize(N);
        t.resize(N);
        double h = T / N;

        for (int i = 0; i < N; i++)
        {
            C[i] = 1.2;
            t[i] = (i + 1) * h;
        }
    }

    double value(double x)
    {
        double val(0);

        for (int i = 0; i < N; i++)
        {
            val += C[i] * exp(-x * t[i]);
        }

        val += F * exp(-x * T);
        return val;
    }

    double deriv(double x)
    {
        double val(0);

        for (int i = 0; i < N; i++)
        {
            val += -C[i] * t[i] * exp(-x * t[i]);
        }

        val += -F * T * exp(-x * T);
        return val;
    }
};

void exercice20()
{
    //exercise 4.2
    double epsilon = 0.001;
    double a = 0;
    double b = 1;
    double P = 98.56;
    Bond bond;

    std::cout << "Solving by bissection: " << std::endl;
    std::cout << solveByBisectionT(&bond, P, a, b, epsilon) << std::endl;

    std::cout << "Solving by Newton & Raphson: " << std::endl;
    std::cout << solveByNRT(&bond, P, 0.2, epsilon) << std::endl;
}

class Fct
{
public:
    double f(double x)
    {
        //put the function here
        // return pow(x, 2);
        return exp(x);
    }
};

void exercice21()
{
    //exercice 4.3

    Fct foo;

    MyTInt<Fct> myNumInt(0, 1, foo);

    std::cout << myNumInt.ByTrapezoid(1000) << std::endl;
    std::cout << myNumInt.BySimpson(1000) << std::endl;
}

void exercice22()
{
    //exercice 4.4
    BinModel model;

    model.getInputData();

    if (model.isInvalidData() || model.isArbitrage())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    Put5 putOption;

    putOption.getInputData();

    if (!putOption.isValidN() || !putOption.isValidK())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    std::cout << "European put option price :" << std::endl;
    std::cout << priceByCRR(model, putOption) << std::endl;

    BinLattice<double> priceTree;
    BinLattice<bool> stoppingTree;

    double price = priceBySnell(model, priceTree, stoppingTree, putOption);

    std::cout << "American put option price :" << std::endl;
    std::cout << price << std::endl;

    stoppingTree.display();
    return;
}

class Intermediary : public EurCall
{

private:
    double S0;
    double r;
    double sigma;

public:
    Intermediary(double T, double K, double S0, double r) : EurCall(T, K), S0(S0), r(r)
    {
    }

    bool areValid()
    {
        return (isValid() && (S0 > 0) && (sigma > 0));
    }

    double value(double sigma)
    {
        return priceByBSFormula(S0, sigma, r);
    }

    double deriv(double sigma)
    {
        return vegaByBSFormula(S0, sigma, r);
    }
};

void main18()
{
    double S0(100.), T(1.), r(0.1), K(100.), sigma;
    Intermediary call(T, K, S0, r);
    double epsilon(0.0001), a(0.01), b(1.), tgt(12.53), guess(0.23);

    std::cout << "Solving by bissection vol implied: " << std::endl;
    std::cout << solveByBisectionT(&call, tgt, a, b, epsilon) << std::endl;

    std::cout << "Solving by Newton & Raphson vol implied: " << std::endl;
    std::cout << solveByNRT(&call, tgt, 0.5, epsilon) << std::endl;

    std::cout << "Solving by bissection vol implied: " << std::endl;
    std::cout << solveByBisectionT(&call, tgt, a, b, epsilon) << std::endl;

    std::cout << "Solving by Newton & Raphson vol implied: " << std::endl;
    std::cout << solveByNRT(&call, tgt, 0.5, epsilon) << std::endl;
}

//=============
void main19()
{
    double S0(100.), r(0.03), sigma(0.2);
    BSModel model(S0, r, sigma);

    double T(1. / 12), K(100);
    int m = 30;

    ArithmAsianCall option(T, K, m);
    long N = 30000;

    std::cout << "Arithmetic Asian Call price = " << option.priceByMC(model, N) << std::endl;

    return;
}

int main()
{
    // std::cout << "Chapter 1 :)" << std::endl;
    // main01();
    // main02();
    // exercice01();
    //main03();
    //exercice02();
    // main04();
    //main05();
    //exercice04_05();
    //exercice06();
    // main06();
    //exercice07();
    // exercice08();
    // main07();
    //exercice09_10();
    // exercice11();

    // std::cout << "Chapter 2 :)" << std::endl;
    //main08();
    //main09();
    // exercice12();
    // main10();
    // exercice13();
    // exercice14();
    // main11();
    //exercice15();

    // std::cout << "Chapter 3 :)" << std::endl;
    // main12();
    // main13();
    // main14();
    // exercice16();
    // exercice17();
    // exercice18();

    // std::cout << "Chapter 4 :)" << std::endl;

    // main15();
    // main16();
    // main17();
    // exercice19();
    // exercice20();
    // exercice21();
    // exercice22();
    // main18();

    std::cout << "Chapter 5 :)" << std::endl;

    main19();

    return 0;
}
