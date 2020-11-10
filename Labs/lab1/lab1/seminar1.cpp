#include "core.h"

void seminar1()
{
	system("cls");
	// start seminar 1
	cout <<"Seminar 1"<< endl << endl<< "Calculate in a one-dimensional array consisting of n-real elements:" << endl <<
		"1) minimum array number;" << endl <<
		"2) the sum of array elements located between the first and second negative" << endl << "elements." << endl <<
		"Transform the array so that all the elements whose module does not exceed 1 are" << endl << "located first and then all the others." << endl << endl;
	int partOfSeminar, size=0, minimal_quantity, treatmentError;
	int* array_of_index = NULL;
	double* array = NULL, *_array = NULL;
	double _sum;
	bool mainCycle = true, errorTreatment, fixForEnterArray=false, JustOneElement;
	

	// actions selection
	while (mainCycle)
	{
		cout << endl << "Choose an action:" << endl;
		cout << "1 - Enter an array." << endl;
		cout << "2 - Minimum element of an array." << endl;
		cout << "3 - Sum of elements." << endl;
		cout << "4 - Sorting an array." << endl;
		cout << "5 - Out an array." << endl;
		cout << "0 - Back to seminar selection." << endl;
		partOfSeminar = EnterInt();
		switch (partOfSeminar) 
		{
		// array input
		case 1:
			cout << "Enter the size of the array >1 and <50" << endl;
			size = EnterSize();
			cout << endl << "Enter an array:" << endl;
			array = ArrayIn(size);
			fixForEnterArray = true;
			break;

		// finding the minimum element 
		case 2:
			if (fixForEnterArray)
			{
				array_of_index = Minimal(array, size, minimal_quantity);
				cout << "Number of minimal element(s): " << minimal_quantity + 1 << endl;
				cout << "Index of minimal element(s): ";
				for (int i = 0; i <= minimal_quantity; i++)
					cout << array_of_index[i] << ' ';
				cout << endl << "Minimal element: " << array[array_of_index[0]] << endl;
			}
			else
				cout << "Error! Please enter array!" << endl;
			break;

		// finding the sum of elements
		case 3:
			if (fixForEnterArray)
			{
				_sum = sum(size, array, treatmentError, errorTreatment, JustOneElement);
				switch (treatmentError)
				{
				case 0:
					cout << "The array does not have negative elements!" << endl;
					break;
				case 1:
					cout << "The array have just one negative element!" << endl;
					break;
				default:
					if (errorTreatment)
						cout << "Negative elements are in a row!" << endl;
					else
						if (JustOneElement)
							cout << "There is only one element between negative elements!" << endl;
						else
							cout << "Sum of elements: " << _sum << endl;
					break;
				}
			}
			else
				cout << "Error! Please enter array!" << endl;
			break;

		// sorting an array
		case 4:
			if (fixForEnterArray)
			{
				_array = sort(size, array);
				cout << "Sorted ";
				ArrayOut(size, _array);
			}
			else
				cout << "Error! Please enter array!" << endl;
			break;

		// out an array
		case 5:
			if (fixForEnterArray)
				ArrayOut(size, array);
			else
				cout << "Error! Please enter array!" << endl;
			break;

		// back to seminar selection
		case 0:
			mainCycle = false;
			break;
		default:
			cout << "Wrong action!" << endl;
			break;
		}
	}
	// clearing memory
	delete[] array;
	delete[] _array;
	delete[] array_of_index;
	maininterface();
}