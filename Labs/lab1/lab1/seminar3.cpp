#include "core.h"

void seminar3() {
	system("cls");
	cout << "Семинар 3" << endl << "Написать программу, которая считывает текст из файла и выводит на экран" << endl <<
		"только цитаты, то есть предложения, заключенные в кавычки." << endl;

	string path,str;
	cout << endl << "Введите путь к файлу:" << endl;
	bool control;
	do {
		cin >> path;
		str = "";
		control = false;
		str = in(path);
		if (str == "Eror 404!")
			control = true;
	} while (control);
	cout << endl << "Текст:" << endl<<endl;
	cout << str<<endl<<endl;
	cout << "Цитаты из текста:" << endl << endl;
	search(str);
	int n;
	do {
		cout << "\n\n\n" << "Если хотите вернутсья к выбору семинара введите 0." << endl;
		cin >> n;
	} while (n != 0);
	if (n == 0)
		interface();
}