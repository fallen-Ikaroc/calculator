#include "core.h"

int DataTypeIn() {
	int type;
	while (true) {
		cout << "Enter type:" << endl;
		cout << "1 - int" << endl;
		cout << "2 - float" << endl;
		cout << "3 - double" << endl;
		cout << "Please enter type: ";
		type = EntElement<int>();
		if (type >= 1 && type <= 3)
			break;
	}
	return type;
}