#include "core.h"

int DataTypeIn()
{
	int type;
	while (true)
	{
		cout << endl << "Choose data type:" << endl;
		cout << "1 - Integer" << endl;
		cout << "2 - Float" << endl;
		cout << "3 - Double" << endl;
		cout << "Enter type: ";
		type = EntElement<int>();
		if (type >= 1 && type <= 3)
			break;
		else
			cout << endl << "Please choose one of three types!" << endl;
	}
	return type;
}