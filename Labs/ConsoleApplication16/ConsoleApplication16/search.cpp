#include "core.h"

char* search(char text[1000], bool& ErrorQuotes, int& SizeOfText)
{
	int numberOfQuotes = 0;
	SizeOfText = 0;
	char* Quotes = new char[1000];
	for (int i = 0; i < strlen(text); i++)
	{
		if (text[i] == '\"')
		{
			ErrorQuotes = false;
			i++;
			numberOfQuotes++;
			if (numberOfQuotes % 2 == 0)
			{
				Quotes[SizeOfText] = '\n';
				SizeOfText++;
			}
		}
		if (numberOfQuotes % 2 == 1)
		{
			Quotes[SizeOfText] = text[i];
			SizeOfText++;
		}
	}
	return Quotes;
}