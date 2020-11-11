
#include "core.h"
template<typename Type>
Type* sort(int size, Type* array)
{
    int indexOfArray = 0;
    Type* _mas = new Type[size];

    for (int i = 0; i < size; i++)
        if (fabs(array[i]) <= 1)
        {
            _mas[indexOfArray] = array[i];
            indexOfArray++;
        }

    for (int i = 0; i < size; i++)
        if (fabs(array[i]) > 1 && indexOfArray < size)
        {
            _mas[indexOfArray] = array[i];
            indexOfArray++;
        }

    return _mas;
}