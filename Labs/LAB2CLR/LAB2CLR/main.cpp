#include "pch.h"
#include "core.h"
using namespace System;

int main()
{

    int n = 4, m = 7;
    char a;
    int _a;
    bool checkForCycle = true;
    array<int, 2>^ P, ^ Q;
    array<int>^ R, ^ T;
    Console::Write("Lab 2\nSpecify values for integer elements of matrixes P and Q with dimension 4 by 7\nand form arrays R and T from the sums of negative elements of matrix rows P and\nQ respectively.\n");
    while (checkForCycle) {
        Console::WriteLine("Please choose action:");
        Console::WriteLine("[1] - Generate matrix P.");
        Console::WriteLine("[2] - Generate matrix Q.");
        Console::WriteLine("[3] - Out matrix P.");
        Console::WriteLine("[4] - Out matrix Q.");
        Console::WriteLine("[5] - Calculate array P and out.");
        Console::WriteLine("[6] - Calculate array T and out.");
        Console::WriteLine("[0] - To finish.");
        Console::Write("Your choice: ");
        a = Console::Read();
        Console::ReadLine();
        _a = a - 48;
        switch (_a) {
        case 1: P = MatrixIn(n, m); Console::WriteLine("\nMatrix P generate!\n"); break;
        case 2: Q = MatrixIn(n, m); Console::WriteLine("\nMatrix Q generate!\n"); break;
        case 3: Console::Write("\nMatrix P:");  MatrixOut(n, m, P); break;
        case 4: Console::Write("\nMatrix Q:");  MatrixOut(n, m, Q); break;
        case 5: R = Sum(n, m, P); Console::Write("\nMatrix R:"); MatrixOut(R); break;
        case 6: T = Sum(n, m, Q); Console::Write("\nMatrix T:"); MatrixOut(T); break;
        case 0: checkForCycle = false; break;
        default: Console::WriteLine("Wrong action!"); break;
        }
    }
    return 0;
}