#include "core.h"

int** changec(int size, int** array, int k, int j) {
	for (int i = 0; i < size; i++) {
		int tmp = array[i][k];
		array[i][k] = array[i][j];
		array[i][j] = tmp;
	}
	return array;
}