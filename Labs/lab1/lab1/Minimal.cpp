#include "core.h"

int* Minimal(double* array, int size, int &minimal_quantity) 
{
    int* array_of_index = new int[size];

    int minimal = 0;
    minimal_quantity=-1;

    for (int i = 0; i < size; i++)
        if (array[i] < array[minimal])
            minimal = i;

    for (int i = 0; i < size; i++)
        if (array[i] == array[minimal]) 
        {
            minimal_quantity++;
            array_of_index[minimal_quantity] = i;
        }   

    return array_of_index;
}