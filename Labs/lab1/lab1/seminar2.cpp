#include "core.h"

void seminar2() {
	system("cls");
	cout << "Семинар 2" << endl << "Характеристикой столбца целочисленной матрицы назовем сумму модулей его" << endl <<
		"отрицательных нечетных элементов. Переставляя столбцы заданной матрицы, расположить" << endl <<
		"их в соответвии с ростом характеристик." << endl <<
		"Найти сумму элементов в теъ столбцах, которые содержат хотя бы один" << endl <<
		"отрицательных элементов." << endl;

	int size, sizec;
	cout << endl << "Введите количество строк матрицы:" << endl<< endl;
	cin >> size;
	cout << endl << "Введите количество стобцов матрицы:" << endl << endl;
	cin >> sizec;
	cout << endl << "Введите массив:" << endl << endl;
	int** array;
	array = ArrayIn(size, sizec);
	cout << "" << endl;
	
	array = sort(size, sizec, array);
	cout << endl << "Отсортированный массив:" << endl << endl;
	ArrayOut(size, sizec, array);

	cout << endl << "Сумма элементов:" << endl << endl;
	cout << sum(size, sizec, array);


	
	int n;
	do {
		cout << "\n\n\n" << "Если хотите вернутсья к выбору семинара введите 0." << endl;
		cin >> n;
	} while (n != 0);
	if (n == 0)
		interface();
}