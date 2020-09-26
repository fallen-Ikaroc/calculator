#include "core.h"

double* ArrayIn(int size) {
	double *array = new double[size];
	for (int i = 0; i < size; i++)
		cin >> array[i];
	return array;
}