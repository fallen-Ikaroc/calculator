#include "core.h"

void seminar2() {
	system("cls");
	cout << "Seminar 2" << endl << "The characteristic feature of the column of the integer matrix is the sum of" << endl << 
		"the modules of its negative odd-numbered elements. By rearranging the columns" << endl << 
		"of a given matrix, arrange them according to the growth of characteristics." << endl << 
		"Find the sum of elements of those columns that contain at least one negative" << endl <<
		"element." << endl;
	bool mainCycle = true, h, fixForEnterArray = false, trigger;
	int size = 0, sizec = 0, partOfSeminar, _sum;
	int** array = NULL, ** _array = NULL;
	while (mainCycle) {
		cout << endl << "Choose an action:" << endl;
		cout << "1 - Enter an array." << endl;
		cout << "2 - Sorting an array." << endl;
		cout << "3 - Sum of elements." << endl;
		cout << "4 - Out an array." << endl;
		cout << "0 - Back to seminar selection." << endl;
		partOfSeminar = EnterInt();
		switch (partOfSeminar)
		{
		case 1:
			cout << endl << "Enter the number of rows in the matrix >1 and <50:" << endl;
			size=EnterSize();
			cout << endl << "Enter the number of stolls of the matrix >1 and <50:" << endl;
			sizec = EnterSize();
			cout << endl << "Enter the array:" << endl;
			array = ArrayIn(size, sizec);
			fixForEnterArray = true;
			break;
		case 2:
			if (fixForEnterArray)
			{
				_array = sort(size, sizec, array, h);
				if (h)
				{
					cout << "Sorted ";
					ArrayOut(size, sizec, _array);
				}
				else
					cout << "The array cannot be sorted!" << endl;
			}
			else
				cout << "Error! Please enter array!" << endl;
			break;
		case 3:
			if (fixForEnterArray)
			{
				_sum = sum(size, sizec, array, trigger);
				if (trigger)
					cout << "Amount of elements: " << _sum << endl;
				else
					cout << "No negative elements in array!" << endl;
			}
			else
				cout << "Error! Please enter array!" << endl;	
			break;
		case 4:
			if (fixForEnterArray)
				ArrayOut(size, sizec, array);
			else
				cout << "Error! Please enter array!" << endl;			
			break;
		case 0:
			mainCycle = false;
			break;
		default:
			cout << "Wrong action!" << endl;
			break;
		}
	}
	for (int i = 0; i < size; i++) {
		delete array[i];
		delete _array[i];
	}
	delete[] array;
	delete[] _array;
	maininterface();
}