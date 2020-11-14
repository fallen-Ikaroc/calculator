#include "core.h"

template<typename Type>
void ArrayOut(int size, Type* array)
{
	cout << "Array: ";
	for (int i = 0; i < size; i++)
		cout << array[i] << ' ';
	cout << endl;
}