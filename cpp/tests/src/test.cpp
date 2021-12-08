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

    Call3 callOption;

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

    Put3 putOption;

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

void main13()
{
    BinModel model;

    model.getInputData();

    if (model.isInvalidData() || model.isArbitrage())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    Call4 callOption;

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

    Put4 putOption;

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

void main14()
{
    BinModel model;

    model.getInputData();

    if (model.isInvalidData() || model.isArbitrage())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    Put putOption;

    putOption.getInputData();

    if (!putOption.isValidN() || !putOption.isValidK())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    std::cout << "European put option price :" << std::endl;
    std::cout << putOption.priceByCRR(model) << std::endl;

    BinLattice<double> priceTree;
    BinLattice<bool> stoppingTree;

    double price = putOption.priceBySnell(model, priceTree, stoppingTree);

    std::cout << "American put option price :" << std::endl;
    std::cout << price << std::endl;

    stoppingTree.display();
    return;
}

void exercice16()
{
    //Erxercice 3.1
    BinModel model;

    model.getInputData();

    if (model.isInvalidData() || model.isArbitrage())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    Put putOption;

    putOption.getInputData();

    if (!putOption.isValidN() || !putOption.isValidK())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    std::cout << "European put option price :" << std::endl;
    std::cout << putOption.priceByCRR(model) << std::endl;

    BinLattice<double> priceTree;
    BinLattice<double> xTree;
    BinLattice<double> yTree;

    double price = putOption.priceByCRR(model, priceTree, xTree, yTree);

    std::cout << "European put option price & strategies :" << std::endl;
    std::cout << price << std::endl;
    std::cout << "Stock :" << std::endl;
    xTree.display();

    std::cout << "Money Market :" << std::endl;
    yTree.display();

    return;
}

void exercice17()
{
    //Erxercice 3.2
    BSModel bsModel;

    bsModel.getInputData();

    if (!bsModel.isValid())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    BinModel binApprox = bsModel.approxBinModel();

    Put putOption;

    std::cout << "Give a strike K for the Option?" << std::endl;
    double K(0);
    std::cin >> K;
    putOption.setK(K);
    putOption.setN(bsModel.getN());

    if (!putOption.isValidN() || !putOption.isValidK())
    {
        std::cout << "ERROR - check inputs - end of interface" << std::endl;
        return;
    }

    std::cout << "European put option price :" << std::endl;
    std::cout << putOption.priceByCRR(binApprox) << std::endl;

    BinLattice<double> priceTree;
    BinLattice<double> xTree;
    BinLattice<double> yTree;

    double price = putOption.priceByCRR(binApprox, priceTree, xTree, yTree);

    std::cout << "European put option price & strategies :" << std::endl;
    std::cout << price << std::endl;
    std::cout << "Stock :" << std::endl;
    xTree.display();

    std::cout << "Money Market :" << std::endl;
    yTree.display();

    return;
}

template <class T>
void myGeneralSwap(T &a, T &b)
{
    T t(a);
    a = b;
    b = t;
}

void exercice18()
{
    std::cout << "Testing swap with template:" << std::endl;
    int a = 1;
    int b = 3;
    std::cout << "Before swap :" << std::endl;
    std::cout << a << "  " << b << std::endl;
    myGeneralSwap<int>(a, b);
    std::cout << "After swap :" << std::endl;
    std::cout << a << "  " << b << std::endl;

    double a1 = 1. / 3;
    double b1 = 39.0;
    std::cout << "Before swap :" << std::endl;
    std::cout << a1 << "  " << b1 << std::endl;
    myGeneralSwap<double>(a1, b1);
    std::cout << "After swap :" << std::endl;
    std::cout << a1 << "  " << b1 << std::endl;

    char a2 = 'k';
    char b2 = 'p';
    std::cout << "Before swap :" << std::endl;
    std::cout << a2 << "  " << b2 << std::endl;
    myGeneralSwap<char>(a2, b2);
    std::cout << "After swap :" << std::endl;
    std::cout << a2 << "  " << b2 << std::endl;
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

    std::cout << "Chapter 4 :)" << std::endl;

    return 0;
}
