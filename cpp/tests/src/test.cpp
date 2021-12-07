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
        std::cout << "ERROR - check inputs";
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

    main08();

    return 0;
}
