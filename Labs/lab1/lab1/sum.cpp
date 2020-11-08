#include "core.h"

double sum(int size, double* array, int & treatmentError, bool &error)
{
    double _sum = 0;
    int fixMove = 0, temp = 0;
    treatmentError = 0;
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
        }
        if (fixMove == 1)
            _sum += array[i];
    }
    return _sum;
}
