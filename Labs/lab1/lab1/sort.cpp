#include "core.h"

int** sort(int size, int sizec, int** array) {
	for (int j = 0; j < sizec; j++) {
		for (int i = j; i < sizec; i++)
			if (character(size, sizec, array, j) > character(size, sizec, array, i))
				array = changec(size, array, j, i);

	}
	return array;
}