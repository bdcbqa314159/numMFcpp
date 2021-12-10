#include <numMFcpp>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "chapter1.cpp"
#include "chapter2.cpp"
#include "chapter3.cpp"
#include "chapter4.cpp"

void main19()
{
    double S0(100.), r(0.03), sigma(0.2);
    BSModel model(S0, r, sigma);

    double T(1. / 12), K(100);
    int m = 30;

    ArithmAsianCall1 option(T, K, m);
    long N = 30000;

    std::cout << "Arithmetic Asian Call price = " << option.priceByMC(model, N) << std::endl;

    return;
}

void exercice23()
{
    double S0(100.), r(0.03), sigma(0.2);
    BSModel model(S0, r, sigma);

    double T(1. / 12), K(100);
    int m = 30;

    ArithmAsianCall1 option(T, K, m);
    EurCall2 option1(T, K, m);
    EurPut1 option2(T, K, m);

    long N = 30000;

    std::cout << "Arithmetic Asian Call price = " << option.priceByMC(model, N) << std::endl;

    std::cout << "Euro Call price = " << option1.priceByMC(model, N) << std::endl;

    std::cout << "Euro Put price = " << option2.priceByMC(model, N) << std::endl;

    return;
}

void main20()
{

    double S0(100.), r(0.03), sigma(0.2);
    BSModel model(S0, r, sigma);

    double T(1. / 12), K(100);
    int m = 30;

    ArithmAsianCall1 option(T, K, m);
    EurCall2 option1(T, K, m);
    EurPut1 option2(T, K, m);

    long N = 30000;

    std::cout << "Arithmetic Asian Call price = " << option.priceByMC(model, N) << std::endl;
    std::cout << "pricing error = " << option.pricingError << std::endl;

    std::cout << "Euro Call price = " << option1.priceByMC(model, N) << std::endl;
    std::cout << "pricing error = " << option1.pricingError << std::endl;

    std::cout << "Euro Put price = " << option2.priceByMC(model, N) << std::endl;
    std::cout << "pricing error = " << option2.pricingError << std::endl;

    return;
}

void main21()
{
    double epsilon(0.0001);
    double S0(100.), r(0.03), sigma(0.2);
    BSModel model(S0, r, sigma);

    double T(1. / 12), K(100);
    int m = 30;

    ArithmAsianCall1 option(T, K, m);
    EurCall2 option1(T, K, m);
    EurPut1 option2(T, K, m);

    long N = 30000;

    std::cout << "Arithmetic Asian Call price = " << option.priceByMC(model, N, epsilon) << std::endl;
    std::cout << "pricing error = " << option.pricingError << std::endl;
    std::cout << "delta = " << option.delta << std::endl;

    std::cout << "Euro Call price = " << option1.priceByMC(model, N, epsilon) << std::endl;
    std::cout << "pricing error = " << option1.pricingError << std::endl;
    std::cout << "delta = " << option1.delta << std::endl;

    std::cout << "Euro Put price = " << option2.priceByMC(model, N, epsilon) << std::endl;
    std::cout << "pricing error = " << option2.pricingError << std::endl;
    std::cout << "delta = " << option2.delta << std::endl;

    return;
}

void exercice24()
{
    //exercise 5.2
    double epsilon(0.0001);
    double S0(100.), r(0.03), sigma(0.2);
    BSModel model(S0, r, sigma);

    double T(1. / 12), K(100);
    int m = 30;

    ArithmAsianCall1 option(T, K, m);
    EurCall2 option1(T, K, m);
    EurPut1 option2(T, K, m);

    long N = 30000;

    std::cout << "Arithmetic Asian Call price = " << option.priceByMC(model, N, epsilon) << std::endl;
    std::cout << "pricing error = " << option.pricingError << std::endl;
    std::cout << "delta = " << option.delta << std::endl;
    std::cout << "gamma = " << option.gamma << std::endl;

    std::cout << "Euro Call price = " << option1.priceByMC(model, N, epsilon) << std::endl;
    std::cout << "pricing error = " << option1.pricingError << std::endl;
    std::cout << "delta = " << option1.delta << std::endl;
    std::cout << "gamma = " << option1.gamma << std::endl;

    std::cout << "Euro Put price = " << option2.priceByMC(model, N, epsilon) << std::endl;
    std::cout << "pricing error = " << option2.pricingError << std::endl;
    std::cout << "delta = " << option2.delta << std::endl;
    std::cout << "gamma = " << option2.gamma << std::endl;

    return;
}

void exercice25()
{
    //exercise 5.3
    double epsilon(0.0001);
    double S0(100.), r(0.03), sigma(0.2);
    BSModel model(S0, r, sigma);

    double T(1. / 12), K(100);
    int m = 30;

    ArithmAsianCall1 option(T, K, m);
    EurCall2 option1(T, K, m);
    EurPut1 option2(T, K, m);

    long N = 30000;

    std::cout << "Arithmetic Asian Call price = " << option.priceByMC(model, N, epsilon) << std::endl;
    std::cout << "pricing error = " << option.pricingError << std::endl;
    std::cout << "delta = " << option.delta << std::endl;
    std::cout << "gamma = " << option.gamma << std::endl;
    std::cout << "theta = " << option.theta << std::endl;
    std::cout << "vega = " << option.vega << std::endl;
    std::cout << "rhow = " << option.rho << std::endl;

    std::cout << "Euro Call price = " << option1.priceByMC(model, N, epsilon) << std::endl;
    std::cout << "pricing error = " << option1.pricingError << std::endl;
    std::cout << "delta = " << option1.delta << std::endl;
    std::cout << "gamma = " << option1.gamma << std::endl;
    std::cout << "theta = " << option1.theta << std::endl;
    std::cout << "vega = " << option1.vega << std::endl;
    std::cout << "rhow = " << option1.rho << std::endl;
    // EurCall1 eur(T, K);
    // double p = eur.priceByBSFormula(S0, sigma, r);
    // std::cout << "Checking BSFormula" << std::endl;
    // std::cout << "p BS = " << p << std::endl;

    std::cout
        << "Euro Put price = " << option2.priceByMC(model, N, epsilon) << std::endl;
    std::cout << "pricing error = " << option2.pricingError << std::endl;
    std::cout << "delta = " << option2.delta << std::endl;
    std::cout << "gamma = " << option2.gamma << std::endl;
    std::cout << "theta = " << option2.theta << std::endl;
    std::cout << "vega = " << option2.vega << std::endl;
    std::cout << "rhow = " << option2.rho << std::endl;

    return;
}

void expectationDirect(long N)
{
    std::cout << "Expecation of cos(Z) with Z = N(0,0.25)" << std::endl;
    double H(0), Hsq(0);
    double X(0), Z(0);

    for (int i = 0; i < N; i++)
    {
        Z = 0.5 * gauss();
        X = cos(Z);
        H = (i * H + X) / (i + 1);
        Hsq = (i * Hsq + pow(X, 2)) / (i + 1);
    }

    double error = (Hsq - H * H) / sqrt(N - 1);

    std::cout
        << "Expectation computed directly:" << std::endl;
    std::cout << "E(cos(Z)) = " << H << std::endl;
    std::cout << "error = " << error << std::endl;
}

void expectationCV(long N)
{
    std::cout << "Expecation of cos(Z) with Z = N(0,0.25) & variance reduction" << std::endl;
    double H(0), Hsq(0);
    double X(0), Z(0), Y(0);

    for (int i = 0; i < N; i++)
    {
        Z = 0.5 * gauss();
        X = cos(Z);
        Y = 1 - 0.5 * Z * Z;
        H = (i * H + X - Y) / (i + 1);
        Hsq = (i * Hsq + pow(X - Y, 2)) / (i + 1);
    }

    double error = (Hsq - H * H) / sqrt(N - 1);

    std::cout
        << "Expectation computed with variance reduction:" << std::endl;
    std::cout << "E(cos(Z)) = " << H + 7. / 8 << std::endl;
    std::cout << "error = " << error << std::endl;
}

void exercice26()
{
    //exercise 5.4
    long N = 1000;
    expectationDirect(N);
    expectationCV(N);
}

void main22()
{
    double S0(100.), r(0.03), sigma(0.2);
    BSModel model(S0, r, sigma);

    double T(1. / 12), K(100);
    int m = 30;

    ArithmAsianCall option(T, K, m);
    GmtrAsianCall optionCV(T, m, K);

    long N = 30000;

    option.priceByVarRedMC(model, m, optionCV);
    std::cout << "Arithmetic Asian Call price = " << option.price << std::endl;
    std::cout << " error = " << option.pricingError << std::endl;
    option.priceByMC(model, N);

    std::cout << "Arithmetic Asian Call price by direct MC = " << option.price << std::endl;
    std::cout << "MC error = " << option.pricingError << std::endl;

    return;
}

void exercice27()
{
    //exercice 5.4
    double S0(100.), r(0.03), sigma(0.2);
    BSModel model(S0, r, sigma);

    double T(1. / 12), K(100);
    int m = 30;

    ArithmAsianCall option(T, K, m);
    GmtrAsianCall optionCV(T, m, K);

    double epsilon = 0.0001;

    long N = 30000;

    option.priceByVarRedMC(model, m, optionCV, epsilon);
    std::cout << "Arithmetic Asian Call price = " << option.price << std::endl;
    std::cout << " error = " << option.pricingError << std::endl;
    std::cout << " delta = " << option.delta << std::endl;
    option.priceByMC(model, N, epsilon);

    std::cout << "Arithmetic Asian Call price by direct MC = " << option.price << std::endl;
    std::cout << "MC error = " << option.pricingError << std::endl;
    std::cout << "MC delta = " << option.delta << std::endl;

    return;
}

void exercice28()
{
    //exeercice 5.5
    double S0(100.), r(0.03), sigma(0.2);
    BSModel model(S0, r, sigma);

    double T(1. / 12), K(100), L(120.);
    int m = 30;

    BarrierCall option(T, m, K, L);
    EurCall optionCV(T, m, K);

    double epsilon = 0.0001;

    long N = 30000;

    option.priceByVarRedMC(model, m, optionCV, epsilon);
    std::cout << "Barrier Call price = " << option.price << std::endl;
    std::cout << " error = " << option.pricingError << std::endl;
    std::cout << " delta = " << option.delta << std::endl;
    option.priceByMC(model, N, epsilon);

    std::cout << "Barrier Call price by direct MC = " << option.price << std::endl;
    std::cout << "MC error = " << option.pricingError << std::endl;
    std::cout << "MC delta = " << option.delta << std::endl;

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

    // main19();
    // exercice23();
    // main20();
    // main21();
    //exercice24();
    // exercice25();
    // exercice26();
    //main22();
    exercice27();
    exercice28();

    return 0;
}
