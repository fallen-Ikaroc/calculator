#include "core.h"

template<typename Type>
Type** ArrayIn(int size, int sizec, Type T)
{
	Type** array = new Type* [size];
	for (int i = 0; i < size; i++)
		array[i] = new Type[sizec];
	for (int i = 0; i < size; i++)
		for (int j = 0; j < sizec; j++)
			array[i][j] = EntElement<Type>(1);
	return array;
}