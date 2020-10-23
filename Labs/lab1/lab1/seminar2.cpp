#include "core.h"

void seminar2() {
	system("cls");
	cout << "Seminar 2" << endl << "The characteristic feature of the column of the integer matrix is the sum of" << endl << 
		"the modules of its negative odd-numbered elements. By rearranging the columns" << endl << 
		"of a given matrix, arrange them according to the growth of characteristics." << endl << 
		"Find the sum of elements of those columns that contain at least one negative" << endl <<
		"element." << endl;
	bool k = true;
	int size = 0, sizec = 0, n;
	int** array = 0;
	while (k) {
		cout << endl << "Choose an action:" << endl;
		cout << "1 - Enter an array." << endl;
		cout << "2 - Sorting an array." << endl;
		cout << "3 - Sum of elements." << endl;
		cout << "4 - Out an array." << endl;
		cout << "0 - Back to seminar selection." << endl;
		cin >> n;
		switch (n) {
		case 1:
			array = ArrayIn(size, sizec);
			break;
		case 2:
			sort(size, sizec, array);
			break;
		case 3:
			sum(size, sizec, array);
			break;
		case 4:
			ArrayOut(size, sizec, array);
			break;
		case 0:
			k = false;
			break;
		default:
			cout << "Wrong action!" << endl;
			break;
		}
	}
	for (int i = 0; i < size; i++)
		delete[] array[i];
	delete[] array;
	interface();
}