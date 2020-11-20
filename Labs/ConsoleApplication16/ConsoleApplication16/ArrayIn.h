#include "core.h"

template<typename Type>
Type* ArrayIn(int size, Type T)
{
	Type* array = new Type[size];
	for (int i = 0; i < size; i++)
		array[i] = EntElement<Type>(1);
	return array;
}