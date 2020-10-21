#include "core.h"

void seminar3() {
	system("cls");
	cout << "Seminar 3" << endl << "Write a program that reads text from a file and displays only quotations," << endl << 
		"i.e. sentences enclosed in inverted commas." << endl;

	char text[10][100], textl[1000] = "";
	bool control = true;
	int n;
	bool k = true;
	while (k) {
		cout << endl << "Choose an action:" << endl;
		cout << "1 - Open file." << endl;
		cout << "2 - Display text." << endl;
		cout << "3 - Display quotes." << endl;
		cout << "0 - Back to seminar selection." << endl;
		cin >> n;
		switch (n) {
		case 1:
			in(text);
			for (int i = 0; i < 10; i++)
				strcat_s(textl, text[i]);
			break;
		case 2:
			out(text);
			break;
		case 3:
			search(textl);
			break;
		case 0:
			k = false;
			break;
		}
	}
	delete[] text;
	delete[] textl;
	interface();
	
}