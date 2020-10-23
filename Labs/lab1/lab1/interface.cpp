#include "core.h"

void interface() {
	system("cls");
	int n;
	while(true){
		cout << "Select the seminar number: 1, 2, 3." << endl << "To finish the program, enter 0." << endl;
		cin >> n;
		if (n == 1 || n == 2 || n == 3 || n == 0)
			break;
	}
	switch (n) {
	case 1: seminar1(); break;
	case 2: seminar2(); break;
	case 3: seminar3(); break;
	case 0: break;
	}
}