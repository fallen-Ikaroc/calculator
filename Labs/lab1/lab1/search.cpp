#include "core.h"

void search(std::string a)
{
	int k = 0;
	string l = "";
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '\"') {
			i++;
			k++;
			if (k != 0 && k % 2 == 0)
				l += "\n\n";
		}
		if (k % 2 == 1)
			l += a[i];
	}
	cout << l;
}