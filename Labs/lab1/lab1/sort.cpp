#include "core.h"

int** sort(int size, int sizec, int** array, bool &h) {
	int** _array = new int*[size];
	for (int i = 0; i < size; i++)
		_array[i] = new int[sizec];
	_array = array;
	bool k = true;
	for (int i = 0; i < sizec; i++) {
		if (character(size, sizec, _array, i) == 0)
			k = false;
	}
	for (int j = 0; j < sizec; j++)
		for (int i = j; i < sizec; i++)
			if (character(size, sizec, _array, j) > character(size, sizec, _array, i))
				_array = changec(size, _array, j, i);
	return _array;
}