#include "core.h"

void Minimal(double* array, int size) {
    double* array_of_index = new double[size];

    int minimal = 0, minimal_quantity=-1;

    for (int i = 0; i < size; i++)
        if (array[i] < array[minimal])
            minimal = i;

    for (int i = 0; i < size; i++)
        if (array[i] == array[minimal]) {
            minimal_quantity++;
            array_of_index[minimal_quantity] = i;
        }
    cout << "Number of minimal element(s): " << minimal_quantity+1 << endl;
    cout << "Index of minimal element(s): ";
    for (int i = 0; i <= minimal_quantity; i++)
        cout << array_of_index[i]<<' ';
    cout << endl << "Minimal element: " << array[minimal] << endl;

    delete[] array_of_index;
}