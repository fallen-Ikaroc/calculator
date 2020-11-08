#include "core.h"

int EnterInt() {
    int num;
    while (true)
    {
        cin >> num;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Entered value is not an integer. Please, repeat your last response: "; 
        }
        else  
            return num;
    }
}