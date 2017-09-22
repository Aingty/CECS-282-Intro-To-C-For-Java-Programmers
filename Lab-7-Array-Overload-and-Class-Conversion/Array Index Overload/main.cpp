/*
 Aingty Eung
 CECS 282 Program 7 Class to Class Conversion
 October 25, 2016
 */

#include "Header.hpp"

int main() {
    srand (time(NULL));
    int x;
    bool keepGoing = true;
    Safearray a;
    while (keepGoing)
    {
        cout << "What index to access?"<<endl;
        cin >> x;
        cin.ignore();
        int test = a[x];
        if (test == -1)
        {
            keepGoing = true;
        }
        else
        {
            cout << test << endl;
            keepGoing = false;
        }
    }
    return 0;
}
