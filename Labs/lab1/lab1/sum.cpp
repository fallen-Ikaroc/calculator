#include "core.h"

void sum(int size, double* array) {
    double _sum = 0;
    int c = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            c++;
            i++;
        }
        if (c == 1) {
            _sum += array[i];
        }
    }
    cout << "Sum of elements: " << _sum << endl;
}
