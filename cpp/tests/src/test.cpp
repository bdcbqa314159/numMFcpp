#include <numMFcpp>
#include <iostream>
#include <cmath>
#include <string>
#include "chapter1.cpp"
#include "chapter2.cpp"

void main12()
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
    std::cout << callOption.priceByCRR(model) << std::endl;

    std::cout << "American call option price :" << std::endl;
    std::cout << callOption.priceBySnell(model) << std::endl;

    Put putOption;

    putOption.getInputData();

    if (!putOption.isValidN() || !putOption.isValidK())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    std::cout << "European put option price :" << std::endl;
    std::cout << putOption.priceByCRR(model) << std::endl;

    std::cout << "American put option price :" << std::endl;
    std::cout << putOption.priceBySnell(model) << std::endl;

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

    std::cout << "Chapter 3 :)" << std::endl;
    main12();

    return 0;
}
