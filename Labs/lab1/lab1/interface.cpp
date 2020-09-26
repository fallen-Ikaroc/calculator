#include "core.h"

void interface() {
	system("cls");
	setlocale(LC_ALL, "Russian");
	int n;
	do {
		cout << "Выберите номер семинара: 1,2,3." << endl<<"Для завершения программы введите 0."<<endl;
		cin >> n;
	} while (n != 1 && n != 2 && n != 3 && n!=0);
	switch (n) {
	case 1: seminar1(); break;
	case 2: seminar2(); break;
	case 3: seminar3(); break;
	}
}