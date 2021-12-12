#include <numMFcpp>
#include <iostream>
#include <cmath>
#include <string>

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
    int m = 100;

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
    //exercice 5.5
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
    //exeercice 5.6
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

void exercice29()
{
    //exercice 5.7
    double S0(100.), r(0.03), sigma(0.2);
    BSModel model(S0, r, sigma);

    double T(1. / 12), K(100);
    int m = 300;

    ArithmAsianCall option(T, K, m);
    ContGmtrAsianCall optionCV(T, m, K);

    long N = 30000;

    option.priceByVarRedMC(model, m, optionCV);
    std::cout << "Arithmetic Asian Call price = " << option.price << std::endl;
    std::cout << " error = " << option.pricingError << std::endl;
    option.priceByMC(model, N);

    std::cout << "Arithmetic Asian Call price by direct MC = " << option.price << std::endl;
    std::cout << "MC error = " << option.pricingError << std::endl;

    return;
}

void main23()
{
    int d = 3;
    Vector S0(d);
    S0[0] = 40.;
    S0[1] = 60.;
    S0[2] = 100.;

    double r = 0.03;

    Matrix C(d);
    for (int i = 0; i < d; i++)
    {
        C[i].resize(d);
    }

    C[0][0] = 0.1;
    C[0][1] = -0.1;
    C[0][2] = 0.0;

    C[1][0] = -0.1;
    C[1][1] = 0.2;
    C[1][2] = 0.0;

    C[2][0] = 0.0;
    C[2][1] = 0.0;
    C[2][2] = 0.3;

    BSModeld model(S0, r, C);

    double T = 1. / 12, K(200.);
    int m = 30;
    ArithmAsianCalld option(T, K, m);

    long N = 30000;
    option.priceByMC(model, N);

    std::cout << "Arithmetic Asian Call price = " << option.price << std::endl;
}

void exercice30()
{
    //exercice 5.8

    int d = 3;
    Vector S0(d);
    S0[0] = 40.;
    S0[1] = 60.;
    S0[2] = 100.;

    double r = 0.03;

    Matrix C(d);
    for (int i = 0; i < d; i++)
    {
        C[i].resize(d);
    }

    C[0][0] = 0.1;
    C[0][1] = -0.1;
    C[0][2] = 0.0;

    C[1][0] = -0.1;
    C[1][1] = 0.2;
    C[1][2] = 0.0;

    C[2][0] = 0.0;
    C[2][1] = 0.0;
    C[2][2] = 0.3;

    BSModeld model(S0, r, C);

    double T = 1. / 12, K(200.);
    int m = 30;
    ArithmAsianCalld option(T, K, m);

    long N = 30000;
    option.priceByMC(model, N);

    std::cout << "Arithmetic Asian Call price = " << option.price << std::endl;
    std::cout << "pricing error = " << option.pricingError << std::endl;
}

void exercice31()
{
    //exercice 5.9

    int d = 3;
    Vector S0(d);
    S0[0] = 40.;
    S0[1] = 60.;
    S0[2] = 100.;

    double r = 0.03;

    Matrix C(d);
    for (int i = 0; i < d; i++)
    {
        C[i].resize(d);
    }

    C[0][0] = 0.1;
    C[0][1] = -0.1;
    C[0][2] = 0.0;

    C[1][0] = -0.1;
    C[1][1] = 0.2;
    C[1][2] = 0.0;

    C[2][0] = 0.0;
    C[2][1] = 0.0;
    C[2][2] = 0.3;

    BSModeld model(S0, r, C);

    double T = 1. / 12, K(200.);
    int m = 30;
    ArithmAsianCalld option(T, K, m);

    long N = 30000;
    double epsilon = 0.0001;
    option.priceByMC(model, N, epsilon);

    std::cout << "Arithmetic Asian Call price = " << option.price << std::endl;
    std::cout << "pricing error = " << option.pricingError << std::endl;

    std::cout << "deltas: " << std::endl;
    for (int i = 0; i < option.delta.size(); i++)
    {
        std::cout << "delta[" << i << "]=" << option.delta[i] << std::endl;
    }
}

void exercice32()
{
    //exercice 5.10

    int d = 3;
    Vector S0(d);
    S0[0] = 40.;
    S0[1] = 60.;
    S0[2] = 100.;

    double r = 0.03;

    Matrix C(d);
    for (int i = 0; i < d; i++)
    {
        C[i].resize(d);
    }

    C[0][0] = 0.1;
    C[0][1] = -0.1;
    C[0][2] = 0.0;

    C[1][0] = -0.1;
    C[1][1] = 0.2;
    C[1][2] = 0.0;

    C[2][0] = 0.0;
    C[2][1] = 0.0;
    C[2][2] = 0.3;

    BSModeld model(S0, r, C);

    double T = 1. / 12, K(200.);
    int m = 30;
    EurBasketCall option(T, K, m);

    long N = 30000;
    double epsilon = 0.0001;
    option.priceByMC(model, N, epsilon);

    std::cout << "Euro Basket Call price = " << option.price << std::endl;
    std::cout << "pricing error = " << option.pricingError << std::endl;
}

void exercice33()
{
    //exercice 5.11

    int d = 3;
    Vector S0(d);
    S0[0] = 40.;
    S0[1] = 60.;
    S0[2] = 100.;

    double r = 0.03;

    Matrix C(d);
    for (int i = 0; i < d; i++)
    {
        C[i].resize(d);
    }

    C[0][0] = 0.1;
    C[0][1] = -0.1;
    C[0][2] = 0.0;

    C[1][0] = -0.1;
    C[1][1] = 0.2;
    C[1][2] = 0.0;

    C[2][0] = 0.0;
    C[2][1] = 0.0;
    C[2][2] = 0.3;

    BSModeld model(S0, r, C);

    double T = 1. / 12, K(200.);
    int m = 30;

    double V(0);
    for (int i = 0; i < d; i++)
    {
        V += model.S0[i];
    }

    Vector Kd = (K / V) * model.S0;

    EurBasketCall option(T, K, m);
    SumEuroCalls optionCV(T, m, Kd);

    long N = 30000;

    option.priceByVarRedMC(model, m, optionCV);

    std::cout << "Euro Basket Call price = " << option.price << std::endl;
    std::cout << "pricing error = " << option.pricingError << std::endl;

    option.priceByMC(model, N);

    std::cout << "Euro Basket Call  Call price by direct MC = " << option.price << std::endl;
    std::cout << "MC error = " << option.pricingError << std::endl;
}

void test_call()
{
    //testing call in d dimension vs 1d.
    int d = 1;
    Vector S0(d);
    S0[0] = 100.;

    double r(0.03), sigma(0.2);

    Matrix C(d);
    for (int i = 0; i < d; i++)
    {
        C[i].resize(d);
    }

    C[0][0] = 0.2;

    BSModeld model(S0, r, C);

    double T = 1. / 12, K(100.);
    int m = 30;

    long N = 300;

    double V(0);
    for (int i = 0; i < d; i++)
    {
        V += model.S0[i];
    }

    Vector Kd = (K / V) * model.S0;

    EurBasketCall option(T, K, m);
    SumEuroCalls optionCV(T, m, Kd);

    option.priceByVarRedMC(model, m, optionCV);

    std::cout << "Euro Basket Call price = " << option.price << std::endl;
    std::cout << "pricing error = " << option.pricingError << std::endl;

    option.priceByMC(model, N);

    std::cout << "Euro Basket Call  Call price by direct MC = " << option.price << std::endl;
    std::cout << "MC error = " << option.pricingError << std::endl;
}
