#include "core.h"

void seminar2() {
	system("cls");
	setlocale(LC_ALL, "Russian");
	cout << "������� 2" << endl << "��������������� ������� ������������� ������� ������� ����� ������� ���" << endl <<
		"������������� �������� ���������. ����������� ������� �������� �������, �����������" << endl <<
		"�� � ���������� � ������ �������������." << endl <<
		"����� ����� ��������� � ��� ��������, ������� �������� ���� �� ����" << endl <<
		"������������� ���������." << endl;



	
	int n;
	do {
		cout << "\n\n\n" << "���� ������ ��������� � ������ �������� ������� 0." << endl;
		cin >> n;
	} while (n != 0);
	if (n == 0)
		interface();
}