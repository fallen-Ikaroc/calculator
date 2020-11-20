#include "pch.h"
#include "core.h"
using namespace System;

int main(array<System::String ^> ^args)
{
    int n=4, m=7, sum;
    array<int, 2>^ P;
    array<int, 2>^ Q;
    array<int>^ R = gcnew array<int>(n);
    array<int>^ T = gcnew array<int>(n);
    Console::Write("Lab 2\nSpecify values for integer elements of matrixes P and Q with dimension 4 by 7\nand form arrays R and T from the sums of negative elements of matrix rows P and\nQ respectively.\n");
    Console::WriteLine("\nHow do you want to fill in the matrixes:");
    Console::WriteLine("1 - Enter from the keypad.");
    Console::WriteLine("2 - Fill it in automatically.\n");
    P = MatrixIn(n, m);
    Q = MatrixIn(n, m);

    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < m; j++) {
            if (Q[i, j] < 0)
                sum += Q[i, j];
        }
        T[i] = sum;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            Console::Write("{0} ", P[i, j]);
        Console::Write("\n");
    }
    Console::Write("\n");
    for (int i = 0; i < n; i++)
        Console::Write("{0} ", R[i]);
    Console::Write("\n\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            Console::Write("{0} ", Q[i, j]);
        Console::Write("\n");
    }
    Console::Write("\n");
    for (int i = 0; i < n; i++)
        Console::Write("{0} ", T[i]);

    return 0;
}
