#include "core.h"

int EnterSize()
{
	int size;
	while (true)
	{
		size = EntElement<int>();
		if (size > 1 && size < 50)
			break;
		else
			cout << "Incorrect size! Please repeat:" << endl;
	}
	return size;
}