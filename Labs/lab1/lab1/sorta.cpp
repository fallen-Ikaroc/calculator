#include "core.h"

double* sort(int size, double* array) 
{
	int indexOfArray = 0;
    double* _mas = new double[size];

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