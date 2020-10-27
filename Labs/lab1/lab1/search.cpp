#include "core.h"

char* search(char text[1000], bool& q, int &c)
{
	int k = 0;
	c = 0;
	char *l = new char[1000];
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
	return l;
}