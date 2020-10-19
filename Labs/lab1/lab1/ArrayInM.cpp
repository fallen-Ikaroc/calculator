#include "core.h"

int** ArrayIn(int &size, int &sizec) {
	cout << endl << "¬ведите количество строк матрицы:" << endl << endl;
	cin >> size;
	cout << endl << "¬ведите количество стобцов матрицы:" << endl << endl;
	cin >> sizec;
	cout << endl << "¬ведите массив:" << endl << endl;
	int** array = new int* [size];
	for (int i = 0; i < size; i++)
		array[i] = new int[sizec];
	for (int i = 0; i < size; i++)
		for (int j = 0; j < sizec; j++)
			cin >> array[i][j];
	return array;
}