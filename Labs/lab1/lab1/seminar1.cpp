#include "core.h"

void seminar1() {
	system("cls");
	setlocale(LC_ALL, "Russian");
	cout <<"Семинар 1"<<endl << "В одномерном массиве, состоящем из n вещественных элементов, вычислить:" << endl <<
		"1) номер минимального элемента массива;" << endl <<
		"2) сумму элементов массива, расположенных между первым и вторым отрицательными элементами." << endl<<
		"Преобразовать массив таким образом, чтобы сначала располагались все элементы,"<<endl<<"модуль которых не превышает 1, а потом - все остальные."<<endl;
	int size;
	double* array;
	cout << "Введите длину массива:"<<endl;
	bool sizectrl;

	do {
		cin >> size;

		if (size > 0)
			sizectrl = false;
		else {
			sizectrl = true;
			cout << "Ошибка! Введите корректную длину массива!"<<endl;
		}
	} while (sizectrl);

	cout << "Введите массив:"<<endl;
	array = ArrayIn(size);

	cout << "Введенный массив:" << endl;
	ArrayOut(size, array);

	cout << "Номер минимального элемента:" << endl;
	cout << Minimal(array,size) << endl;

	cout << "Сумма элементов: " << endl;
	cout << sum(size, array) << endl;
	


	
	int n;
	do {
		cout << "\n\n\n" << "Если хотите вернутсья к выбору семинара введите 0." << endl;
		cin >> n;
	} while (n != 0);

	if (n == 0)
		interface();
}