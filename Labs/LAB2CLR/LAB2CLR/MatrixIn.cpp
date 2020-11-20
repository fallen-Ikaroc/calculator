#include "pch.h"
#include "core.h"
using namespace System;

array<int,2>^ MatrixIn(int n, int m)
{
	String^ line;
	array<int, 2>^ matrix = gcnew array<int, 2>(n, m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			line = Console::ReadLine();
			matrix[i, j] = Convert::ToDouble(line);
		}
	return matrix;
}