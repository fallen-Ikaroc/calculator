#include "core.h"

void maininterface()
{
	system("cls");
	//seminar number selection
	int seminar, type;
	while (true)
	{
		cout << "Select the seminar number: 1, 2, 3." << endl << "To finish the program, enter 0." << endl;
		//input function
		seminar = EntElement<int>();
		if (seminar == 1 || seminar == 2 || seminar == 3 || seminar == 0)
			break;
	}

	switch (seminar)
	{
	case 1:
		type = DataTypeIn();
		switch (type) {
		case 1: seminar1<int>(); break;
		case 2: seminar1<float>(); break;
		case 3: seminar1<double>(); break;
		}
		break;
	/*case 2:
		type = DataTypeIn();
		switch (type) {
		case 1: seminar2(); break;
		case 2: seminar2(); break;
		case 3: seminar2(); break;
		}
		break;
	case 3:
		type = DataTypeIn();
		switch (type) {
		case 1: seminar3(); break;
		case 2: seminar3(); break;
		case 3: seminar3(); break;
		}
		break;*/
	case 0: break;
	}
}