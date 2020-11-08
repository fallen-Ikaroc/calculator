#include "core.h"

int sum(int size, int sizec, int** array, bool &triger) 
{
	int _sum = 0;
	bool neg;
	triger=false;
	for (int j = 0; j < sizec; j++) 
	{
		neg = false;
		int _sum_2 = 0;
		for (int i = 0; i < size; i++)
		{
			if (array[i][j] < 0)
				neg = true;
			_sum_2 += array[i][j];
		}
		if (neg) {
			triger = true;
			_sum += _sum_2;
		}
	}
	return _sum;
}