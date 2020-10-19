#include "core.h"

double* ArrayIn(int &size) {
	cout << "Enter the size of the array:" << endl;

	while (true) {
		cin >> size;
		if (size > 0)
			break;
		else
			cout << "Incorrect array size! Enter the size of the array:" << endl;
	}
	
	cout << endl << "Enter an array:" << endl;
	double *array = new double[size];
	for (int i = 0; i < size; i++)
		cin >> array[i];
	return array;
}
