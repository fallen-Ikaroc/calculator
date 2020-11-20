#include "pch.h"
#include "core.h"
using namespace System;

int main(array<System::String^>^ args)
{
    int n = 4, m = 7, sum;
    array<int, 2>^ P, ^ Q;
    array<int>^ R, ^ T;

    Console::Write("Lab 2\nSpecify values for integer elements of matrixes P and Q with dimension 4 by 7\nand form arrays R and T from the sums of negative elements of matrix rows P and\nQ respectively.\n");
    Console::WriteLine("\nHow do you want to fill in the matrixes:");
    Console::WriteLine("1 - Enter from the keypad.");
    Console::WriteLine("2 - Fill it in automatically.\n");

    P = MatrixIn(n, m);
    Q = MatrixIn(n, m);

    R = Sum(n, m, P);
    T = Sum(n, m, Q);

    MatrixOut(n, m, P);
    Console::Write("\n");
    for (int i = 0; i < n; i++)
        Console::Write("{0} ", R[i]);

    Console::Write("\n\n");

    MatrixOut(n, m, Q);
    Console::Write("\n");
    for (int i = 0; i < n; i++)
        Console::Write("{0} ", T[i]);

    return 0;
}