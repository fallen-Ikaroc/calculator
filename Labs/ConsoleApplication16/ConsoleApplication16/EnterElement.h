#include "core.h"
template<typename Type>
Type EntElement(Type T) {
    Type num;
    while (true)
    {
        cin >> num;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Entered value is not number. Please, repeat your last response: ";
        }
        else
            return num;
    }
}