#include "core.h"

template<typename Type>
Type* ArrayIn(int size)
{
	Type* array = new Type[size];
	for (int i = 0; i < size; i++)
		array[i] = EntElement<Type>();
	return array;
}