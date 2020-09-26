#include "core.h"

void ArrayOut(int size, double *array) {
	for (int i = 0; i < size; i++)
		cout << array[i] << ' ';
	cout << endl;
}
void ArrayOut(int size, int sizec, int** array) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < sizec; j++)
			cout << array[i][j] << ' ';
		cout << endl;
	}
}