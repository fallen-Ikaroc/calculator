#include "core.h"

void seminar1() {
	system("cls");
	cout <<"Seminar 1"<< endl << endl<< "Calculate in a one-dimensional array consisting of n-real elements:" << endl <<
		"1) minimum array number;" << endl <<
		"2) the sum of array elements located between the first and second negative" << endl << "elements." << endl <<
		"Transform the array so that all the elements whose module does not exceed 1 are" << endl << "located first and then all the others." << endl << endl;
	int n, size=0, *array_of_index= new int[size], minimal_quantity, z;
	double* array = 0, *_array=0;
	bool k = true, p;
	double _sum;
	while (k) {
		cout << endl << "Choose an action:" << endl;
		cout << "1 - Enter an array." << endl;
		cout << "2 - Minimum element of an array." << endl;
		cout << "3 - Sum of elements." << endl;
		cout << "4 - Sorting an array." << endl;
		cout << "5 - Out an array." << endl;
		cout << "0 - Back to seminar selection." << endl;
		while (!(cin >> n)) {
			cin.clear();
			cin.ignore();
		}
		switch (n) {
		case 1:
			cout << "Enter the size of the array:" << endl;
			while (true) {
				cin >> size;
				if (size > 0)
					break;
				else {
					cout << "Incorrect array size! Enter the size of the array:" << endl;
					cin.clear();
					cin.ignore();
				}
			}
			cout << endl << "Enter an array:" << endl;
			array = ArrayIn(size);
			break;
		case 2:
			array_of_index = Minimal(array, size, minimal_quantity);
			cout << "Number of minimal element(s): " << minimal_quantity + 1 << endl;
			cout << "Index of minimal element(s): ";
			for (int i = 0; i <= minimal_quantity; i++)
				cout << array_of_index[i] << ' ';
			cout << endl << "Minimal element: " << array[array_of_index[0]] << endl;
			break;
		case 3:
			_sum=sum(size, array, z, p);
			switch (z) {
			case 0:
				cout << "The array does not have negative elements!" << endl;
				break;
			case 1:
				cout << "The array have just one negative element!" << endl;
				break;
			default:
				if (p)
					cout << "Negative elements are in a row!" << endl;
				else
					cout << "Sum of elements: " << _sum << endl;
				break;
			}
			break;
		case 4:
			_array=sort(size, array);
			cout << "Sorted array:";
			for (int i = 0; i < size; i++) {
				cout << _array[i] << ' ';
			}
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
	delete[] _array;
	delete[] array_of_index;
	maininterface();
}