#include "core.h"

int** ArrayIn(int &size, int &sizec) {
	while (true) {
		cout << endl << "Enter the number of rows in the matrix:" << endl << endl;
		cin >> size;
		if (size > 0)
			break;
	}
	while (true) {
		cout << endl << "Enter the number of stolls of the matrix:" << endl << endl;
		cin >> sizec;
		if (sizec > 0)
			break;
	}
	cout << endl << "Enter the array:" << endl << endl;
	int** array = new int* [size];
	for (int i = 0; i < size; i++)
		array[i] = new int[sizec];
	for (int i = 0; i < size; i++)
		for (int j = 0; j < sizec; j++)
			cin >> array[i][j];
	return array;
}