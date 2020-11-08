#include "core.h"

char** in(bool &error) 
{
	ifstream file;
	char** text = new char* [10], path[100]="";
	int choose;
	for (int i = 0; i < 10; i++) 
		text[i] = new char[100];
	cout << "Do you want use standart path(0) or enter your path(1)"<<endl;
	while (true)
	{
		choose = EnterInt();
		if (choose == 0)
		{
			strcat_s(path, "text.txt");
			break;
		}
		else
			if (choose == 1)
			{
				cout << "Please enter path:" << endl;
				cin >> path;
				break;
			}
			else
				cout << "Wrong value! Please repeat!" << endl;

	}
	file.open(path);
	if (file.is_open()) 
	{
		for (int row = 0; row < 10; row++)
			file.getline(text[row], 99);
		file.close();
		error = false;
	}
	else
		error = true;
	return text;
}