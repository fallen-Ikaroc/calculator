#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    int n=4, m=7, sum;
    Random^ rnd = gcnew Random;
    array<int, 2>^ P = gcnew array<int, 2>(n, m);
    array<int, 2>^ Q = gcnew array<int, 2>(n, m);
    array<int>^ R = gcnew array<int>(n);
    array<int>^ T = gcnew array<int>(n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            P[i, j] = rnd->Next() / 10000000 - 100;
            Q[i, j] = rnd->Next() / 10000000 - 100;
        }
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < m; j++) {
            if(P[i,j]<0)
                sum += P[i, j];
        }
        R[i] = sum;
    }
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
