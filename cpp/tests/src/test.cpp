#include <numMFcpp>
#include <iostream>
#include <cmath>
#include <string>
#include "chapter1.cpp"

void main08()
{
    BinModel model;

    model.getInputData();

    if (model.isInvalidData() || model.isArbitrage())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }
    double K(0);
    int N(0);

    std::cout << "Get call option data" << std::endl;

    getDataInputs(&N, &K);

    bool validData = isValid(N, K);

    if (!validData)
    {
        std::cout << "Invalid data for call option" << std::endl;
        return;
    }

    std::cout << "European call option price :" << std::endl;
    std::cout << priceByCRR(model, N, K, callPayoff) << std::endl;

    std::cout << "European put option price :" << std::endl;
    std::cout << priceByCRR(model, N, K, putPayoff) << std::endl;

    return;
}

void main09()
{
    BinModel model;

    model.getInputData();

    if (model.isInvalidData() || model.isArbitrage())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    Call callOption;

    callOption.getInputData();

    if (!callOption.isValidN() || !callOption.isValidK())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    std::cout << "European call option price :" << std::endl;
    std::cout << callOption.priceByCRR(model, callOption.getK()) << std::endl;

    Put putOption;

    putOption.getInputData();

    if (!putOption.isValidN() || !putOption.isValidK())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    std::cout << "European put option price :" << std::endl;
    std::cout << putOption.priceByCRR(model, putOption.getK()) << std::endl;

    return;
}

int main()
{
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

    std::cout << "Chapter 2 :)" << std::endl;
    //main08();
    main09();

    return 0;
}
