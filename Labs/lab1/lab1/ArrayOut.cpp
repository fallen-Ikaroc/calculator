#include "core.h"

void ArrayOut(int size, double* array) 
{
	cout << "Array: ";
	for (int i = 0; i < size; i++)
		cout << array[i] << ' ';
	cout << endl;
}
