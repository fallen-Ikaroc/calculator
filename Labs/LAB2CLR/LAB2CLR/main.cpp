#include "pch.h"
#include "core.h"
using namespace System;

int main()
{
    int n = 4, m = 7;
    char InputAction;
    bool checkForCycle = true, CheckForNegative, CheckForP = false, CheckForQ = false;
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
        InputAction = Console::Read();
        Console::ReadLine();
        switch (InputAction - 48)
        {
        case 1:
            P = MatrixIn(n, m);
            CheckForP = true;
            Console::WriteLine("\nMatrix P generate!\n");
            break;
        case 2:
            Q = MatrixIn(n, m);
            CheckForQ = true;
            Console::WriteLine("\nMatrix Q generate!\n");
            break;
        case 3:
            if (CheckForP)
            {
                Console::Write("\nMatrix P:");
                MatrixOut(n, m, P);
            }
            else
                Console::WriteLine("\nError! Enter the matrix P.\n");
            break;
        case 4:
            if (CheckForQ)
            {
                Console::Write("\nMatrix Q:");
                MatrixOut(n, m, Q);
            }
            else
                Console::WriteLine("\nError! Enter the matrix Q.\n");
            break;
        case 5:
            if (CheckForP)
            {
                R = Sum(n, m, P);
                CheckForNegative = false;
                for (int i = 0; i < n; i++)
                    if (R[i] == 0)
                        CheckForNegative = true;
                if (CheckForNegative)
                    Console::WriteLine("Error! There is no one negative elements in the one of the rows.");
                else
                {
                    Console::Write("\nMatrix R:");
                    MatrixOut(R);
                }
            }
            else
                Console::WriteLine("\nError! Enter the matrix P.\n");
            break;
        case 6:
            if (CheckForQ)
            {
                T = Sum(n, m, Q);
                CheckForNegative = false;
                for (int i = 0; i < n; i++)
                    if (T[i] == 0)
                        CheckForNegative = true;
                if (CheckForNegative)
                    Console::WriteLine("Error! There is no one negative elements in the one of the rows.");
                else
                {
                    Console::Write("\nMatrix T:");
                    MatrixOut(T);
                }
            }
            else
                Console::WriteLine("\nError! Enter the matrix Q.\n");
            break;
        case 0:
            checkForCycle = false;
            break;
        default:
            Console::WriteLine("Wrong action!");
            break;
        }
    }
    return 0;
}