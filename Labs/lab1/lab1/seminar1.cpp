#include "core.h"

void seminar1() {
	system("cls");
	cout <<"Seminar 1"<< endl << endl<< "Calculate in a one-dimensional array consisting of n-real elements:" << endl <<
		"1) minimum array number;" << endl <<
		"2) the sum of array elements located between the first and second negative" << endl << "elements." << endl <<
		"Transform the array so that all the elements whose module does not exceed 1 are" << endl << "located first and then all the others." << endl << endl;
	int n, size = 0;
	double* array = 0;
	bool k = true;
	double _sum, minimal;
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
			minimal=Minimal(array, size);
			break;
		case 3:
			_sum=sum(size, array);
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
	delete[] array;

	interface();
}