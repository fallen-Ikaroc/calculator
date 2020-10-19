#include "core.h"

void sum(int size, int sizec, int** array) {
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
	cout  << "Сумма элементов:" << _sum << endl;
}