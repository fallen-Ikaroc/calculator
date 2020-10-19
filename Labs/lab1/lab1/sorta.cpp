#include "core.h"

void sort(int size, double* array) {
	int _i=0;
    double* _mas = new double[size];
    for (int i = 0; i < size; i++) {
        if (fabs(array[i]) <= 1) {
           _mas[_i] = array[i];
            _i++;
        }
    }
    for (int i = 0; i < size; i++) {
        if (fabs(array[i]) > 1 && _i< size) {
            _mas[_i] = array[i];
            _i++;
        }
    }
    cout << "Sorted array:";
    for (int i = 0; i < size; i++) {
        cout << _mas[i] << ' ';
    }
}