#include "core.h"

void seminar2() {
	system("cls");
	cout << "������� 2" << endl << "��������������� ������� ������������� ������� ������� ����� ������� ���" << endl <<
		"������������� �������� ���������. ����������� ������� �������� �������, �����������" << endl <<
		"�� � ���������� � ������ �������������." << endl <<
		"����� ����� ��������� � ��� ��������, ������� �������� ���� �� ����" << endl <<
		"������������� ���������." << endl;

	int size, sizec;
	cout << endl << "������� ���������� ����� �������:" << endl<< endl;
	cin >> size;
	cout << endl << "������� ���������� ������� �������:" << endl << endl;
	cin >> sizec;
	cout << endl << "������� ������:" << endl << endl;
	int** array;
	array = ArrayIn(size, sizec);
	cout << "" << endl;
	
	array = sort(size, sizec, array);
	cout << endl << "��������������� ������:" << endl << endl;
	ArrayOut(size, sizec, array);

	cout << endl << "����� ���������:" << endl << endl;
	cout << sum(size, sizec, array);


	
	int n;
	do {
		cout << "\n\n\n" << "���� ������ ��������� � ������ �������� ������� 0." << endl;
		cin >> n;
	} while (n != 0);
	if (n == 0)
		interface();
}