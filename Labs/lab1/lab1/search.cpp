#include "core.h"

char* search(char text[1000])
{
	int k = 0, c = 0;
	bool q = true;
	char l[1000] = "";
	for (int i = 0; i < strlen(text); i++) {
		if (text[i] == '\"') {
			q = false;
			i++;
			k++;
			if (k % 2 == 0) {
				l[c] = '\n';
				c++;
			}
		}
		if (k % 2 == 1) {
			l[c] = text[i];
			c++;
		}
	}
	if (q)
		cout << "There are no quotes in the text!";
	else
		cout << l;
	char *_l = new char[strlen(l)];
	return _l;
}