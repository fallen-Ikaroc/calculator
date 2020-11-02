#include "core.h"

double* ArrayIn(int size) 
{
	double *array = new double[size];
	for (int i = 0; i < size; i++) 
	{
		while (!(cin >> array[i])) 
		{
			cin.clear();
			cin.ignore();	
		}
		
	}
		
	return array;
}
