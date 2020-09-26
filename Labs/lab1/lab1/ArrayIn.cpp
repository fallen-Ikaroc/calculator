#include "core.h"

double* ArrayIn(int size) {
	double *array = new double[size];
	for (int i = 0; i < size; i++)
		cin >> array[i];
	return array;
}
int** ArrayIn(int size, int sizec) {
	int** array = new int* [size];
	for (int i = 0; i < size; i++)
		array[i] = new int[sizec];
	for (int i = 0; i < size; i++)
		for (int j = 0; j < sizec; j++)
			cin >> array[i][j];
	return array;
}