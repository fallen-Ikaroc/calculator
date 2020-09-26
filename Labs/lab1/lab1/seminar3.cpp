#include "core.h"

void seminar3() {
	system("cls");
	setlocale(LC_ALL, "Russian");
	cout << "Семинар 3" << endl << "Написать программу, которая считывает текст из файла и выводит на экран" << endl <<
		"только цитаты, то есть предложения, заключенные в кавычки." << endl;



	
	int n;
	do {
		cout << "\n\n\n" << "Если хотите вернутсья к выбору семинара введите 0." << endl;
		cin >> n;
	} while (n != 0);
	if (n == 0)
		interface();
}