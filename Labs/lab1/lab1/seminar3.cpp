#include "core.h"

void seminar3() {
	system("cls");
	cout << "������� 3" << endl << "�������� ���������, ������� ��������� ����� �� ����� � ������� �� �����" << endl <<
		"������ ������, �� ���� �����������, ����������� � �������." << endl;

	string path,str;
	cout << endl << "������� ���� � �����:" << endl;
	bool control;
	do {
		cin >> path;
		str = "";
		control = false;
		str = in(path);
		if (str == "Eror 404!")
			control = true;
	} while (control);
	cout << endl << "�����:" << endl<<endl;
	cout << str<<endl<<endl;
	cout << "������ �� ������:" << endl << endl;
	search(str);
	int n;
	do {
		cout << "\n\n\n" << "���� ������ ��������� � ������ �������� ������� 0." << endl;
		cin >> n;
	} while (n != 0);
	if (n == 0)
		interface();
}