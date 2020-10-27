#include "core.h"

void seminar3() {
	system("cls");
	cout << "Seminar 3" << endl << "Write a program that reads text from a file and displays only quotations," << endl << 
		"i.e. sentences enclosed in inverted commas." << endl;

	char textl[1000] = "", *l=new char[1000],** text = new char* [10];
	bool control = true, a;
	int n, c;
	bool k = true, q = true;
	for (int i = 0; i < 10; i++) {
		text[i] = new char[100];
	}
	while (k) {
		cout << endl << "Choose an action:" << endl;
		cout << "1 - Open file." << endl;
		cout << "2 - Display text." << endl;
		cout << "3 - Display quotes." << endl;
		cout << "0 - Back to seminar selection." << endl;
		while (!(cin >> n)) {
			cin.clear();
			cin.ignore();
		}
		switch (n) {
		case 1:
			cout << "Enter file path: ";
			do {
				text=in(a);
				if(a)
					cout << "The file is not open! Enter another way!" << endl;
			} while (a);
			for (int i = 0; i < 10; i++)
				strcat_s(textl, text[i]);
			break;
		case 2:
			out(text);
			break;
		case 3:
			l=search(textl, q, c);
			if (q)
				cout << "There are no quotes in the text!";
			else
				for (int i = 0; i < c; i++)
					cout << l[i];
			break;
		case 0:
			k = false;
			break;
		}
	}
	
	maininterface();
	
}