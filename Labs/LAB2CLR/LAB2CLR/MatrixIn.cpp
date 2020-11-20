#include "pch.h"
#include "core.h"
using namespace System;

array<int,2>^ MatrixIn(int n, int m)
{
	array<int, 2>^ P = gcnew array<int, 2>(n, m);
	Random^ rnd = gcnew Random;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			P[i, j] = rnd->Next() / 10000000 - 100;
	return P;
}