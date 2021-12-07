#include <numMFcpp>
#include <iostream>
#include <cmath>
#include <string>

void main01()
{

    std::cout << "Hey there :)" << std::endl;
    return;
}

void main02()
{
    double S0, U, D, R;

    std::cout << "===Enter data===" << std::endl;
    std::cout << "S0 >> ";
    std::cin >> S0;
    std::cout << "U >> ";
    std::cin >> U;
    std::cout << "D >> ";
    std::cin >> D;
    std::cout << "R >> ";
    std::cin >> R;

    if (S0 <= 0. || U <= -1 || D <= -1 || U <= D || R <= -1)
    {
        std::cout << "Invalid range." << std::endl;
        return;
    }

    if (R >= U || R <= D)
    {
        std::cout << "Arbitrage exists" << std::endl;
        return;
    }

    std::cout << "Data checked" << std::endl;
    std::cout << "Risk free probability q = " << (R - D) / (U - D) << std::endl;

    int n = 3;
    int i = 2;

    std::cout << "Stock price calculated at node n=" << n << " i=" << i << std::endl;
    std::cout << "S(" << n << "," << i << ")=" << S0 * pow(1 + U, i) * pow(1 + D, n - i) << std::endl;
    return;
}

void exercice01()
{

    double S0, U, D, R;

    std::cout << "===Enter data===" << std::endl;
    std::cout << "S0 >> ";
    std::cin >> S0;
    std::cout << "U >> ";
    std::cin >> U;
    std::cout << "D >> ";
    std::cin >> D;
    std::cout << "R >> ";
    std::cin >> R;

    if (S0 <= 0. || U <= -1 || D <= -1 || U <= D || R <= -1)
    {
        std::cout << "Invalid range." << std::endl;
        return;
    }

    if (R >= U || R <= D)
    {
        std::cout << "Arbitrage exists" << std::endl;
        return;
    }

    std::cout << "Data checked" << std::endl;
    std::cout << "Risk free probability q = " << (R - D) / (U - D) << std::endl;

    int n(0);
    int i(0);

    std::cout << "===Enter nodes===" << std::endl;
    std::cout << "n >> ";
    std::cin >> n;
    std::cout << "i >> ";
    std::cin >> i;

    std::cout << "Stock price calculated at node n=" << n << " i=" << i << std::endl;
    std::cout << "S(" << n << "," << i << ")=" << S0 * pow(1 + U, i) * pow(1 + D, n - i) << std::endl;
    return;
}

void main03()
{
    double S0(0), U(0), D(0), R(0);
    int n(0), i(0);

    getDataInputs(S0, U, D, R);

    bool data = isInvalidData(S0, U, D, R);
    bool arbitrage = isArbitrage(U, D, R);

    if (data || arbitrage)
    {
        std::cout << "Data are wrong or arbitrage exists" << std::endl;
        return;
    }

    std::cout << "Data checked" << std::endl;
    double q = riskFreeProbability(R, U, D);
    std::cout << "Risk free probability q = " << q << std::endl;

    n = 3;
    i = 2;

    std::cout << "Stock price calculated at node n=" << n << " i=" << i << std::endl;
    double Sni = S(S0, U, D, R, n, i);
    std::cout << "S(" << n << "," << i << ")=" << Sni << std::endl;
    return;
}

void mySwap(double &a, double &b)
{
    // double t;
    // t = a;
    // a = b;
    // b = t;

    //Without extra memory
    a += b;
    b = a - b;
    a -= b;
}

void exercice02()
{
    std::cout << "Testing mySwap function" << std::endl;
    double a(0), b(0);

    std::cout << "a>>";
    std::cin >> a;
    std::cout << "b>>";
    std::cin >> b;

    std::cout << "Before swap:" << std::endl;
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;

    mySwap(a, b);

    std::cout << "After swap:" << std::endl;
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
}

void main04()
{
    std::cout << "The entire code is in main03 as there is nothing to be done, the project is already built with separate compilation :)" << std::endl;
    return;
}

void main05()
{
    double S0(0), U(0), D(0), R(0);
    double K(0);
    int N(0);

    getDataInputs(S0, U, D, R);

    bool data = isInvalidData(S0, U, D, R);
    bool arbitrage = isArbitrage(U, D, R);

    if (data || arbitrage)
    {
        std::cout << "Data are wrong or arbitrage exists" << std::endl;
        return;
    }

    std::cout << "Data checked" << std::endl;
    std::cout << "Get call option data" << std::endl;

    getDataInputs(N, K);

    std::cout << "European call option price :" << std::endl;
    std::cout << priceByCRR(S0, U, D, R, N, K) << std::endl;
    return;
}

void exercice03()
{
    std::cout << "Check the function priceByCRR in options01.hpp, the while loop should be there." << std::endl;

    // int i = 0;
    // while (i <= N)
    // {
    //     Price[i] = callPayoff(S(S0, U, D, R, N, i), K);
    //     i++;
    // }

    // i = N - 1;
    // while (i >= 0)
    // {
    //     Price[i] = (q * Price[i + 1] + (1 - q) * Price[i]) / (1 + R);
    //     i--;
    // }
    //Compare with this output:
    // ===Enter data===
    // S0 >> 100
    // U >> 0.99
    // D >> 0.2
    // R >> 0.87
    // Data checked
    // Get call option data
    // ===Enter data===
    // steps to expiry N >> 100
    // strike K >> 65
    // European call option price :
    // 0.148644
}

void exercice04_05()
{
    double S0(0), U(0), D(0), R(0);
    double K(0);
    int N(0);

    getDataInputs(S0, U, D, R);

    bool data = isInvalidData(S0, U, D, R);
    bool arbitrage = isArbitrage(U, D, R);

    if (data || arbitrage)
    {
        std::cout << "Data are wrong or arbitrage exists" << std::endl;
        return;
    }

    std::cout << "Data checked" << std::endl;
    std::cout << "Get call option data" << std::endl;

    getDataInputs(N, K);

    bool call = isValid(N, K);

    if (!call)
    {
        std::cout << "Invalid data for call option" << std::endl;
        return;
    }

    std::cout << "European call option price :" << std::endl;
    std::cout << priceByCRRSum(S0, U, D, R, N, K) << std::endl;

    return;
}

void bubblesort(double *a, int N)
{
    //performing bubble sort on array of doubles
    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j <= N - i; j++)
        {
            if (a[j - 1] > a[j])
            {
                mySwap(a[j - 1], a[j]);
            }
        }
    }

    return;
}

void exercice06()
{
    std::cout << "Testing bubble sort" << std::endl;

    double a[] = {0.9, 0.12, 0.34, 9.12, 5.6, 7.8};
    std::cout << "array:" << std::endl;
    for (int i = 0; i < 6; i++)
    {
        std::cout << a[i] << " " << std::endl;
    }

    bubblesort(a, 6);
    std::cout << "array sorted:" << std::endl;
    for (int i = 0; i < 6; i++)
    {
        std::cout << a[i] << " " << std::endl;
    }
}

void main06()
{
    double S0(0), U(0), D(0), R(0);
    double K(0);
    int N(0);

    getDataInputs(S0, U, D, R);

    bool data = isInvalidData(S0, U, D, R);
    bool arbitrage = isArbitrage(U, D, R);

    if (data || arbitrage)
    {
        std::cout << "Data are wrong or arbitrage exists" << std::endl;
        return;
    }

    std::cout << "Data checked" << std::endl;
    std::cout << "Get call option data" << std::endl;

    getDataInputs(&N, &K);

    bool call = isValid(N, K);

    if (!call)
    {
        std::cout << "Invalid data for call option" << std::endl;
        return;
    }

    std::cout << "European call option price :" << std::endl;
    std::cout << priceByCRR2(S0, U, D, R, N, K) << std::endl;
    return;
}

void mySwap(double *a, double *b)
{
    double t(0);
    t = *a;
    *a = *b;
    *b = t;
}

void bubblesort2(double *a, int N)
{
    //performing bubble sort on array of doubles
    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j <= N - i; j++)
        {
            if (a[j - 1] > a[j])
            {
                mySwap(a + j - 1, a + j);
            }
        }
    }

    return;
}

void exercice07()
{
    std::cout << "Testing mySwap function" << std::endl;
    double a(0), b(0);

    std::cout << "a>>";
    std::cin >> a;
    std::cout << "b>>";
    std::cin >> b;

    std::cout << "Before swap:" << std::endl;
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;

    mySwap(&a, &b);

    std::cout << "After swap:" << std::endl;
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;

    std::cout << "Testing bubble sort with pointers" << std::endl;

    double arr[] = {0.9, 0.12, 0.34, 9.12, 5.6, 7.8};
    std::cout << "array:" << std::endl;
    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i] << " " << std::endl;
    }

    bubblesort(arr, 6);
    std::cout << "array sorted:" << std::endl;
    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i] << " " << std::endl;
    }
}

void exercice08()
{
    double S0(0), U(0), D(0), R(0);
    double K(0);
    int N(0);

    getDataInputs(&S0, &U, &D, &R);

    bool data = isInvalidData(S0, U, D, R);
    bool arbitrage = isArbitrage(U, D, R);

    if (data || arbitrage)
    {
        std::cout << "Data are wrong or arbitrage exists" << std::endl;
        return;
    }

    std::cout << "Data checked" << std::endl;
    std::cout << "Get call option data" << std::endl;

    getDataInputs(&N, &K);

    bool call = isValid(N, K);

    if (!call)
    {
        std::cout << "Invalid data for call option" << std::endl;
        return;
    }

    std::cout << "European call option price :" << std::endl;
    std::cout << priceByCRR2(S0, U, D, R, N, K) << std::endl;
    return;
}

void main07()
{

    double S0(0), U(0), D(0), R(0);
    double K(0);
    int N(0);

    getDataInputs(&S0, &U, &D, &R);

    bool data = isInvalidData(S0, U, D, R);
    bool arbitrage = isArbitrage(U, D, R);

    if (data || arbitrage)
    {
        std::cout << "Data are wrong or arbitrage exists" << std::endl;
        return;
    }

    std::cout << "Data checked" << std::endl;
    std::cout << "Get call option data" << std::endl;

    getDataInputs(&N, &K);

    bool call = isValid(N, K);

    if (!call)
    {
        std::cout << "Invalid data for call option" << std::endl;
        return;
    }

    std::cout << "European call option price :" << std::endl;
    std::cout << priceByCRR(S0, U, D, R, N, K, callPayoff) << std::endl;

    std::cout << "European put option price :" << std::endl;
    std::cout << priceByCRR(S0, U, D, R, N, K, putPayoff) << std::endl;

    return;
}

void exercice09_10()
{

    double S0(0), U(0), D(0), R(0);
    double K(0);
    int N(0);

    getDataInputs(&S0, &U, &D, &R);

    bool data = isInvalidData(S0, U, D, R);
    bool arbitrage = isArbitrage(U, D, R);

    if (data || arbitrage)
    {
        std::cout << "Data are wrong or arbitrage exists" << std::endl;
        return;
    }

    std::cout << "Data checked" << std::endl;
    std::cout << "Get call option data" << std::endl;

    getDataInputs(&N, &K);

    bool call = isValid(N, K);

    if (!call)
    {
        std::cout << "Invalid data for call option" << std::endl;
        return;
    }

    std::cout << "European Digital call option price :" << std::endl;
    std::cout << priceByCRR(S0, U, D, R, N, K, callDigitalPayoff) << std::endl;

    std::cout << "European Digital put option price :" << std::endl;
    std::cout << priceByCRR(S0, U, D, R, N, K, putDigitalPayoff) << std::endl;

    return;
}

void exercice11()
{

    double S0(0), U(0), D(0), R(0);

    int N(0);
    int noParams(0);

    getDataInputs(&S0, &U, &D, &R);

    bool data = isInvalidData(S0, U, D, R);
    bool arbitrage = isArbitrage(U, D, R);

    if (data || arbitrage)
    {
        std::cout << "Data are wrong or arbitrage exists" << std::endl;
        return;
    }

    std::cout << "Data checked" << std::endl;
    std::cout << "Get call option data" << std::endl;

    getDataInputs(&N, &noParams);
    bool paramsOk = isValid(N, noParams);

    if (!paramsOk)
    {
        std::cout << "Params not ok" << std::endl;
        return;
    }

    double *Ks = new double[noParams];

    getDataInputs(noParams, Ks);

    bool strikesOk = isValid(noParams, Ks);

    if (!paramsOk)
    {
        std::cout << "Strikes not ok" << std::endl;
        return;
    }

    std::cout << "European Digital call option price :" << std::endl;
    std::cout << priceByCRR(S0, U, D, R, N, Ks, callDigitalPayoff) << std::endl;

    std::cout << "European Digital put option price :" << std::endl;
    std::cout << priceByCRR(S0, U, D, R, N, Ks, putDigitalPayoff) << std::endl;

    std::cout << "European call option price :" << std::endl;
    std::cout << priceByCRR(S0, U, D, R, N, Ks, callPayoff) << std::endl;

    std::cout << "European put option price :" << std::endl;
    std::cout << priceByCRR(S0, U, D, R, N, Ks, putPayoff) << std::endl;

    std::cout << "European double digital option price :" << std::endl;
    std::cout << priceByCRR(S0, U, D, R, N, Ks, doubleDigitalPayoff) << std::endl;

    delete[] Ks;

    return;
}