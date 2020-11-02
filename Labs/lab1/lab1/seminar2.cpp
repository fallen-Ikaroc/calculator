#include "core.h"

void seminar2() {
	system("cls");
	cout << "Seminar 2" << endl << "The characteristic feature of the column of the integer matrix is the sum of" << endl << 
		"the modules of its negative odd-numbered elements. By rearranging the columns" << endl << 
		"of a given matrix, arrange them according to the growth of characteristics." << endl << 
		"Find the sum of elements of those columns that contain at least one negative" << endl <<
		"element." << endl;
	bool k = true, h;
	int size = 0, sizec = 0, n, _sum;
	int** array = NULL, ** _array = NULL;
	while (k) {
		cout << endl << "Choose an action:" << endl;
		cout << "1 - Enter an array." << endl;
		cout << "2 - Sorting an array." << endl;
		cout << "3 - Sum of elements." << endl;
		cout << "4 - Out an array." << endl;
		cout << "0 - Back to seminar selection." << endl;
		while (!(cin >> n)) 
		{
			cin.clear();
			cin.ignore();
		}
		switch (n) 
		{
		case 1:
			while (true) 
			{
				cout << endl << "Enter the number of rows in the matrix:" << endl << endl;
				while (!(cin >> size)) 
				{
					cin.clear();
					cin.ignore();
				}
				if (size > 0)
					break;
			}
			while (true) 
			{
				cout << endl << "Enter the number of stolls of the matrix:" << endl << endl;
				while (!(cin >> sizec)) 
				{
					cin.clear();
					cin.ignore();
				}
				if (sizec > 0)
					break;
			}
			cout << endl << "Enter the array:" << endl << endl;
			array = ArrayIn(size, sizec);
			break;
		case 2:
			_array=sort(size, sizec, array, h);
			if (h) 
			{
				cout << "Sorted ";
				ArrayOut(size, sizec, _array);
			}
			else
				cout << "The array cannot be sorted!" << endl;
			break;
		case 3:
			_sum=sum(size, sizec, array);
			cout << "Amount of elements: " << _sum << endl;
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
		delete array[i];
	delete[] array;
	maininterface();
}