
#include "core.h"
template<typename Type>
Type sum(int size, Type* array, int& treatmentError, bool& error, bool& JustOneElement)
{
    Type _sum = 0;
    int fixMove = 0, temp = 0;
    treatmentError = 0;
    JustOneElement = false;
    error = false;
    for (int i = 0; i < size; i++)
        if (array[i] < 0)
            treatmentError++;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < 0)
        {
            fixMove++;
            if (fixMove == 1)
            {
                temp = i;
                _sum -= array[i];
            }
            if ((i - 1) == temp)
                error = true;
            if (fixMove == 2 && array[i - 2] < 0)
                JustOneElement = true;
        }
        if (fixMove == 1)
            _sum += array[i];
    }
    return _sum;
}