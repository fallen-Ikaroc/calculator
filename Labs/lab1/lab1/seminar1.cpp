#include "core.h"

void seminar1() {
	system("cls");
	cout <<"—еминар 1"<<endl <<endl<< "¬ одномерном массиве, состо€щем из n вещественных элементов, вычислить:" << endl <<
		"1) номер минимального элемента массива;" << endl <<
		"2) сумму элементов массива, расположенных между первым и вторым отрицательными элементами." << endl<<
		"ѕреобразовать массив таким образом, чтобы сначала располагались все элементы,"<<endl<<"модуль которых не превышает 1, а потом - все остальные."<<endl<<endl;
	int n, size=0;
	double* array=0;
	bool k = true;
	
	while (k) {
		cout << endl << "Choose an action:" << endl;
		cout << "1 - Enter an array." << endl;
		cout << "2 - Minimum element of an array." << endl;
		cout << "3 - Sum of elements." << endl;
		cout << "4 - Sorting an array." << endl;
		cout << "5 - Out an array." << endl;
		cout << "0 - Back to seminar selection." << endl;
		cin >> n;
		switch (n) {
		case 1:
			array = ArrayIn(size);
			break;
		case 2:
			Minimal(array, size);
			break;
		case 3:
			sum(size, array);
			break;
		case 4:
			sort(size, array);
			break;
		case 5:
			ArrayOut(size, array);
			break;
		case 0:
			k = false;
			break;
		default:
			cout << "Wrong action!" << endl;
			break;
		}
	}
	interface();
}