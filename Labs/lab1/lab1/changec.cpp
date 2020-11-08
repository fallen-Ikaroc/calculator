#include "core.h"

int** changec(int size, int** array, int colfor, int colfrom) 
{
	for (int i = 0; i < size; i++) 
	{
		int tmp = array[i][colfor];
		array[i][colfor] = array[i][colfrom];
		array[i][colfrom] = tmp;
	}
	return array;
}