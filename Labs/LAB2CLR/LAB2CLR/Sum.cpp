#include "pch.h"
#include "core.h"
using namespace System;

array<int>^ Sum(int n, int m, array<int, 2>^ array)
{
    array<int>^ SumOfElements = gcnew array<int>(n);
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
            if (array[i, j] < 0)
                sum += array[i, j];
        array[i] = sum;
    }
    return SumOfElements;
}