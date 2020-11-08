#include "core.h"

int character(int size, int sizec, int** array, int col)
{
	int _character = 0;
	for (int i = 0; i < size; i++)
		if (array[i][col] < 0 && i % 2 == 0)
			_character += abs(array[i][col]);
	return _character;
}