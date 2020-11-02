#include "core.h"

char** in(bool &a) 
{
	char** text = new char* [10];
	for (int i = 0; i < 10; i++) 
		text[i] = new char[100];
	char path[100];
	ifstream file;
	cin >> path;
	file.open(path);
	if (file.is_open()) 
	{
		for (int r = 0; r < 10; r++)
			file.getline(text[r], 99);
		file.close();
		a = false;
	}
	else
		a = true;
	return text;
}