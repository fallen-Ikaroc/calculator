#include "core.h"

void seminar2() {
	system("cls");
	cout << "������� 2" << endl << "��������������� ������� ������������� ������� ������� ����� ������� ���" << endl <<
		"������������� �������� ���������. ����������� ������� �������� �������, �����������" << endl <<
		"�� � ���������� � ������ �������������." << endl <<
		"����� ����� ��������� � ��� ��������, ������� �������� ���� �� ����" << endl <<
		"������������� ���������." << endl;
	bool k = true;
	int size=0, sizec=0,n;
	int** array=0;
	while (k) {
		cout << endl << "Choose an action:" << endl;
		cout << "1 - Enter an array." << endl;
		cout << "2 - Sorting an array." << endl;
		cout << "3 - Sum of elements." << endl;
		cout << "4 - Out an array." << endl;
		cout << "0 - Back to seminar selection." << endl;
		cin >> n;
		switch (n) {
		case 1:
			array = ArrayIn(size, sizec);
			break;
		case 2:
			sort(size, sizec, array);
			break;
		case 3:
			sum(size, sizec, array);
			break;
		case 4:
			ArrayOut(size, sizec, array);
			break;
		case 0:
			k = false;
			break;
		default:
			cout << "Wrong action!" << endl;
			break;
		}
	}
	interface();
}