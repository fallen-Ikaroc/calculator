#include "core.h"

void seminar1() {
	system("cls");
	cout <<"������� 1"<<endl <<endl<< "� ���������� �������, ��������� �� n ������������ ���������, ���������:" << endl <<
		"1) ����� ������������ �������� �������;" << endl <<
		"2) ����� ��������� �������, ������������� ����� ������ � ������ �������������� ����������." << endl<<
		"������������� ������ ����� �������, ����� ������� ������������� ��� ��������,"<<endl<<"������ ������� �� ��������� 1, � ����� - ��� ���������."<<endl<<endl;
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

	cout <<endl<< "������� ������:"<<endl;
	array = ArrayIn(size);

	cout << endl <<endl<< "��������� ������:" << endl;
	ArrayOut(size, array);

	cout << endl << "����� ������������ ��������:" << endl;
	cout << Minimal(array,size) << endl;

	cout << endl << "����� ���������: " << endl;
	cout << sum(size, array) << endl;
	
	int n;
	do {
		cout << "\n\n\n" << "���� ������ ��������� � ������ �������� ������� 0." << endl;
		cin >> n;
	} while (n != 0);

	if (n == 0)
		interface();
}