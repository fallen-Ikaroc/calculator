#include "core.h"

void sum(int size, double* array) {
    double _sum = 0;
    int c = 0, k = 0, d = 0;
    bool error = false;
    for (int i = 0; i < size; i++) {
        if (array[i] < 0)
            k++;
    }
    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            c++;
            if (c == 1) {
                d = i;
                _sum -= array[i];
            }
            if ((i - 1) == d) {
                error = true;
            }
        }
        if (c == 1) {
            _sum += array[i];
        }
        
    }
    switch (k) {
    case 0:
        cout << "The array does not have negative elements!" << endl;
        break;
    case 1:
        cout << "The array have just one negative element!" << endl;
        break;
    default:
        if (error)
            cout << "Negative elements are in a row!" << endl;
        else
            cout << "Sum of elements: " << _sum << endl;
        break;
    }
    
}
