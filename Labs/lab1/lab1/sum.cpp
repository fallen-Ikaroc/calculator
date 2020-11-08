#include "core.h"

double sum(int size, double* array, int &k, bool &error) 
{
    double _sum = 0;
    int c = 0, d = 0;
    k = 0;
    error = false;
    for (int i = 0; i < size; i++) 
        if (array[i] < 0)
            k++;
    for (int i = 0; i < size; i++) 
    {
        if (array[i] < 0) 
        {
            c++;
            if (c == 1) 
            {
                d = i;
                _sum -= array[i];
            }
            if ((i - 1) == d) 
                error = true;
        }
        if (c == 1)
            _sum += array[i];
    }
    return _sum;
}
