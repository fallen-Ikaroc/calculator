#include "core.h"

void seminar3() {
	system("cls");
	setlocale(LC_ALL, "Russian");
	cout << "������� 3" << endl << "�������� ���������, ������� ��������� ����� �� ����� � ������� �� �����" << endl <<
		"������ ������, �� ���� �����������, ����������� � �������." << endl;



	
	int n;
	do {
		cout << "\n\n\n" << "���� ������ ��������� � ������ �������� ������� 0." << endl;
		cin >> n;
	} while (n != 0);
	if (n == 0)
		interface();
}