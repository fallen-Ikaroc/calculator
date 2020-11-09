#include "core.h"

void seminar3()
{
	system("cls");
	// start seminar 3
	cout << "Seminar 3" << endl << "Write a program that reads text from a file and displays only quotations," << endl << 
		"i.e. sentences enclosed in inverted commas." << endl;
	char textl[1000] = "", *Quotes=NULL, ** text = NULL;
	bool control = true, ErrorFile, fixForEnterFile=false, mainCycle = true, ErrorQuotes = true;
	int partOfSeminar, SizeOfText;

	// actions selection
	while (mainCycle)
	{
		cout << endl << "Choose an action:" << endl;
		cout << "1 - Open file." << endl;
		cout << "2 - Display text." << endl;
		cout << "3 - Display quotes." << endl;
		cout << "0 - Back to seminar selection." << endl;
		partOfSeminar = EnterInt();
		switch (partOfSeminar)
		{
		// file opening
		case 1:
			cout << "Enter file path: ";
			do {
				text=in(ErrorFile);
				if(ErrorFile)
					cout << "The file is not open! Enter another way!" << endl;
			} while (ErrorFile);
			for (int i = 0; i < 10; i++)
				strcat_s(textl, text[i]);
			fixForEnterFile = true;
			break;

		// display text
		case 2:
			if (fixForEnterFile)
				out(text);
			else
				cout << "Eror! Please enter path and open file with text!" << endl;
			break;

		// display quotes
		case 3:
			if (fixForEnterFile)
			{
				Quotes = search(textl, ErrorQuotes, SizeOfText);
				if (ErrorQuotes)
					cout << "There are no quotes in the text!";
				else
					for (int i = 0; i < SizeOfText; i++)
						cout << Quotes[i];
			}
			else
				cout << "Eror! Please enter path and open file with text!" << endl;
			break;

		// back to seminar selection
		case 0:
			mainCycle = false;
			break;
		}
	}
	// clearing memory
	if (Quotes != NULL && text != NULL) {
		delete[] Quotes;
		for (int i = 0; i < 10; i++)
			delete text[i];
		delete[] text;
	}
	maininterface();
}