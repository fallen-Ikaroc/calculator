#include "pch.h"
#include "core.h"
using namespace System;

int main()
{
    int n = 4, m = 7, sum;
    array<int, 2>^ P, ^ Q;
    array<int>^ R, ^ T;

    Console::Write("Lab 2\nSpecify values for integer elements of matrixes P and Q with dimension 4 by 7\nand form arrays R and T from the sums of negative elements of matrix rows P and\nQ respectively.\n");
    Console::WriteLine("\nEnter the matrix:");

    P = MatrixIn(n, m);
    Q = MatrixIn(n, m);

    R = Sum(n, m, P);
    T = Sum(n, m, Q);

    MatrixOut(n, m, P);
    Console::Write("\n");
    MatrixOut(R);

    Console::Write("\n\n");

    MatrixOut(n, m, Q);
    Console::Write("\n");
    MatrixOut(T);

    return 0;
}