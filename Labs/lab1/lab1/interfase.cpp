#include "core.h"

void maininterface() 
{
	system("cls");
	//seminar number selection
	int seminar;
	while(true)
	{
		cout << "Select the seminar number: 1, 2, 3." << endl << "To finish the program, enter 0." << endl;
		//input function
		seminar = EnterInt();
		if (seminar == 1 || seminar == 2 || seminar == 3 || seminar == 0)
			break;
	}

	switch (seminar)
	{
	case 1: seminar1(); break;
	case 2: seminar2(); break;
	case 3: seminar3(); break;
	case 0: break;
	}
}