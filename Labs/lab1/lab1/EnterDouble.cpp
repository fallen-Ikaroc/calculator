#include "core.h"

double EnterDouble() {
    double num;
    while (true)
    {
        cin >> num;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Entered value is not an double. Please, repeat your last response: "; 
        }
        else
        {
            cin.ignore(32767, '\n');
            return num;
        }
    }
}