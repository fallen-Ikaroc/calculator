#include "core.h"

int** sort(int size, int sizec, int** array) {
	int** _array = array;
	bool k = true;
	for (int i = 0; i < sizec; i++) {
		if (character(size, sizec, _array, i) == 0)
			k = false;
	}
	if (k) {
		for (int j = 0; j < sizec; j++)
			for (int i = j; i < sizec; i++)
				if (character(size, sizec, _array, j) > character(size, sizec, _array, i))
					_array = changec(size, _array, j, i);
		cout << "Sorted ";
		ArrayOut(size, sizec, _array);
	}
	else
		cout << "The array cannot be sorted!"<<endl;
	return _array;
	
}