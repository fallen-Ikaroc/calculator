#include "core.h"

int ArrayOut(int size, int sizec, int** array) {
	cout << "Array: " << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < sizec; j++)
			cout << array[i][j] << ' ';
		cout << endl;
	}
	return 0;
}