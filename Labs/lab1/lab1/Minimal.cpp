#include "core.h"

int Minimal(double* array, int size) {
    int minimal = 0;
    for (int i = 0; i < size; i++)
        if (array[i] < array[minimal])
            minimal = i;
    return minimal+1;
}