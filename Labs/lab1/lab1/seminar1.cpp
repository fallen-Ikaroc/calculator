#include "core.h"

void seminar1() {
	system("cls");
	setlocale(LC_ALL, "Russian");
	cout <<"������� 1"<<endl << "� ���������� �������, ��������� �� n ������������ ���������, ���������:" << endl <<
		"1) ����� ������������ �������� �������;" << endl <<
		"2) ����� ��������� �������, ������������� ����� ������ � ������ �������������� ����������." << endl<<
		"������������� ������ ����� �������, ����� ������� ������������� ��� ��������,"<<endl<<"������ ������� �� ��������� 1, � ����� - ��� ���������."<<endl;
	int size;
	double* array;
	cout << "������� ����� �������:"<<endl;
	bool sizectrl;

	do {
		cin >> size;

		if (size > 0)
			sizectrl = false;
		else {
			sizectrl = true;
			cout << "������! ������� ���������� ����� �������!"<<endl;
		}
	} while (sizectrl);

	cout << "������� ������:"<<endl;
	array = ArrayIn(size);

	cout << "��������� ������:" << endl;
	ArrayOut(size, array);

	cout << "����� ������������ ��������:" << endl;
	cout << Minimal(array,size) << endl;

	cout << "����� ���������: " << endl;
	cout << sum(size, array) << endl;
	


	
	int n;
	do {
		cout << "\n\n\n" << "���� ������ ��������� � ������ �������� ������� 0." << endl;
		cin >> n;
	} while (n != 0);

	if (n == 0)
		interface();
}