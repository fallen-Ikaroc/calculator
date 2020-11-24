#include "pch.h"
#include "core.h"
using namespace System;


array<int,2>^ MatrixIn(int n, int m)
{
	Random^ rnd = gcnew Random;
	array<int, 2>^ matrix = gcnew array<int, 2>(n, m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			matrix[i, j] = rnd->Next() / 10000000 - 100;
	return matrix;
}

//array<int, 2>^ MatrixIn(int n, int m)
//{
//	Random^ rnd = gcnew Random;
//	array<int, 2>^ matrix = gcnew array<int, 2>(n, m);
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//		{
//			matrix[i, j] = Convert::ToInt32(Console::ReadLine());
//		}
//	return matrix;
//}