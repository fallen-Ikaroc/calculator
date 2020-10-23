#include "core.h"

void in(char (&text)[10][100]) {
	char path[100];
	ifstream file;
	while (true) {
		cout << "Enter file path: ";
		cin>>path;
		file.open(path);
		if (file.is_open())
			break;
		else
			cout << "‘айл не открыт! ¬ведите другой путь!" << endl;
	}
	for (int r = 0; r < 10; r++) 
		file.getline(text[r], 99);
	
}