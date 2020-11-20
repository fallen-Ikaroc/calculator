#include "pch.h"
#include "core.h"
using namespace System;

array<int>^ Sum(int n, int m, array<int, 2>^ matrix)
{
    array<int>^ SumOfElements = gcnew array<int>(n);
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
            if (matrix[i, j] < 0)
                sum += matrix[i, j];
        SumOfElements[i] = sum;
    }
    return SumOfElements;
}