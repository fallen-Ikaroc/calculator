#include "core.h"

template<typename Type>
Type** changec(int size, Type** array, int colfor, int colfrom)
{
	for (int i = 0; i < size; i++)
	{
		Type tmp = array[i][colfor];
		array[i][colfor] = array[i][colfrom];
		array[i][colfrom] = tmp;
	}
	return array;
}