#include "pch.h"
#include "core.h"
using namespace System;

void MatrixOut(int n, int m, array<int, 2>^ matrix)
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++)
            Console::Write("{0} ", matrix[i, j]);
        Console::Write("\n");
    }
}