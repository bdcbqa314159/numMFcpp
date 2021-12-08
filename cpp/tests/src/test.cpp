#include <numMFcpp>
#include <iostream>
#include <cmath>
#include <string>
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

    // main15();
    main16();

    return 0;
}
