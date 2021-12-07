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

    Call_ callOption;

    callOption.getInputData();

    if (!callOption.isValidN() || !callOption.isValidK())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    std::cout << "European call option price :" << std::endl;
    std::cout << callOption.priceByCRR(model, callOption.getK()) << std::endl;

    Put_ putOption;

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

double f(double x)
{
    //put the function here
    // return pow(x, 2);
    return exp(x);
}

void exercice12()
{
    //exercice 2.1

    DefInt myInt(0, 1, f);
    std::cout << myInt.ByTrapezoid(1000) << std::endl;
    std::cout << myInt.BySimpson(1000) << std::endl;
}

void main10()
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

    Put putOption;

    putOption.getInputData();

    if (!putOption.isValidN() || !putOption.isValidK())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    std::cout << "European put option price :" << std::endl;
    std::cout << putOption.priceByCRR(model) << std::endl;

    return;
}

void exercice13()
{
    //exercice 2.2

    BinModel model;

    model.getInputData();

    if (model.isInvalidData() || model.isArbitrage())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    BullSpread bull;

    bull.getInputData();

    if (!bull.isValidN() || !bull.isValidKs())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    std::cout << "Bull Spread price :" << std::endl;
    std::cout << bull.priceByCRR(model) << std::endl;

    BearSpread bear;

    bear.getInputData();

    if (!bear.isValidN() || !bear.isValidKs())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    std::cout << "Bear Spread price :" << std::endl;
    std::cout << bear.priceByCRR(model) << std::endl;

    return;
}

//Aim: interface of the virtual class NumInt and test with the function we want :)
class Test : public NumInt
{
public:
    Test(double a, double b) : NumInt(a, b)
    {
    }
    double f(double x)
    {
        return exp(x);
    }
};

void exercice14()
{
    //exercice 2.3

    Test myInt(0, 1);
    std::cout << myInt.ByTrapezoid(1000) << std::endl;
    std::cout << myInt.BySimpson(1000) << std::endl;
}

void main11()
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

    Put putOption;

    putOption.getInputData();

    if (!putOption.isValidN() || !putOption.isValidK())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    std::cout << "European put option price :" << std::endl;
    std::cout << putOption.priceByCRR(model) << std::endl;

    DoubDigital dDOption;

    dDOption.getInputData();

    if (!dDOption.isValidN() || !dDOption.isValidKs())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    std::cout << "Double Digital option price :" << std::endl;
    std::cout << dDOption.priceByCRR(model) << std::endl;

    return;
}

void exercice15()
{
    //exercice 2.4

    BinModel model;

    model.getInputData();

    if (model.isInvalidData() || model.isArbitrage())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    Butterfly butterfly;

    butterfly.getInputData();

    if (!butterfly.isValidN() || !butterfly.isValidKs())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    std::cout << "Butterfly Option price :" << std::endl;
    std::cout << butterfly.priceByCRR(model) << std::endl;

    Strangle strangle;

    strangle.getInputData();

    if (!strangle.isValidN() || !strangle.isValidKs())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    std::cout << "Strangle Option price :" << std::endl;
    std::cout << strangle.priceByCRR(model) << std::endl;

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
    //main09();
    // exercice12();
    // main10();
    // exercice13();
    // exercice14();
    // main11();
    exercice15();

    return 0;
}
