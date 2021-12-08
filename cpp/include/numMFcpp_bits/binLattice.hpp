#ifndef BINLATTICE_H
#define BINLATTICE_H

#include <iostream>
#include <vector>
#include <iomanip>

template <class T>
class BinLattice
{
private:
    int N;
    std::vector<std::vector<T>> Lattice;

public:
    void setN(int N)
    {
        this->N = N;
        Lattice.resize(N + 1);

        for (int n = 0; n <= N; n++)
        {
            Lattice[n].resize(n + 1);
        }
    }

    void setNode(int n, int i, double x)
    {
        Lattice[n][i] = x;
    }

    double getNode(int n, int i)
    {
        return Lattice[n][i];
    }

    void display()
    {
        std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(3);

        for (int n = 0; n <= N; n++)
        {
            for (int i = 0; i <= n; i++)
            {
                std::cout << std::setw(7) << getNode(n, i) << std::endl;
            }
            std::cout << std::endl;
        }
    }
};

#endif

//This is binLattice01.hpp but as it is not used at all I only replaced with binLattice02.hpp directly
// class BinLattice
// {
// private:
//     int N;
//     std::vector<std::vector<double>> Lattice;

// public:
//     void setN(int N)
//     {
//         this->N = N;
//         Lattice.resize(N + 1);

//         for (int n = 0; n <= N; n++)
//         {
//             Lattice[n].resize(n + 1);
//         }
//     }

//     void setNode(int n, int i, double x)
//     {
//         Lattice[n][i] = x;
//     }

//     double getNode(int n, int i)
//     {
//         return Lattice[n][i];
//     }

//     void display()
//     {
//         std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(3);

//         for (int n = 0; n <= N; n++)
//         {
//             for (int i = 0; i <= n; i++)
//             {
//                 std::cout << std::setw(7) << getNode(n, i) << std::endl;
//             }
//             std::cout << std::endl;
//         }
//     }
// };