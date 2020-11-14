#include "core.h"

template<typename Type>
void ArrayOut(int size, int sizec, Type** array)
{
	cout << "Array: " << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < sizec; j++)
			cout << array[i][j] << ' ';
		cout << endl;
	}
}