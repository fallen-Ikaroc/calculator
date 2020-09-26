#include "core.h"

double sum(int size, double* array) {
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
    return _sum;
}
int sum(int size, int sizec, int** array) {
	int _sum = 0;
	bool neg;
	for (int j = 0; j < sizec; j++) {
		neg = false;
		int _sum_2 = 0;
		for (int i = 0; i < size; i++)
		{
			if (array[i][j] < 0)
				neg = true;
			_sum_2 += array[i][j];
		}
		if (neg)
			_sum += _sum_2;
	}
	return _sum;
}