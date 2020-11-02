#include "core.h"

int character(int size, int sizec, int** array, int j)
{
	int _character = 0;
	for (int i = 0; i < size; i++)
		if (array[i][j] < 0 && i % 2 == 0)
			_character += abs(array[i][j]);
	return _character;
}