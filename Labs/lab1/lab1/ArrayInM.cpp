#include "core.h"

int** ArrayIn(int size, int sizec) 
{
	int** array = new int* [size];
	for (int i = 0; i < size; i++)
		array[i] = new int[sizec];
	for (int i = 0; i < size; i++)
		for (int j = 0; j < sizec; j++)
			while (!(cin >> array[i][j])) 
			{
				cin.clear();
				cin.ignore();
			}
			
	return array;
}