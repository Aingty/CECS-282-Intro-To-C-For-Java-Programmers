/*
 Aingty Eung
 CECS 282 Program 7 Class to Class Conversion
 October 25, 2016
 */

#include "Header.hpp"
Safearray::Safearray()
{
    bool keepGoing = true;
    while (keepGoing)
    {
        cout << "What is the lower bound?" << endl;
        cin >> lower;
        cin.ignore();
        cout << "What is the upper bound?" << endl;
        cin >> upper;
        cin.ignore();
        if (upper < lower)
        {
            cout << "Invalid, lower bound is greater than upper bound!! Redo!"<<endl;
        }
        else
        {
            array = new int[(upper - lower + 1)];
            size = (upper - lower + 1);
            keepGoing = false;
        }
    }
    cout << "Array initialized with random numbers between 1 to 10"<<endl;
    int index = 0;
    for (int i = lower; i <= upper; i++)
    {
        array[index] = rand() % 10 + 1;
        index++;
    }
}
Safearray::Safearray(int low, int up)
{
    upper = up;
    lower = low;
    if (upper < lower)
    {
        cout << "Invalid, lower bound is greater than upper bound!! Redo!"<<endl;
    }
    else
    {
        array = new int[(upper - lower + 1)]; // Here I initialized a new array with the right size
        size = (upper - lower + 1);
    }
    cout << "Array initialized with random numbers between 1 to 10"<<endl;
    int index = 0;
    for (int i = lower; i <= upper; i++)
    {
        array[index] = rand() % 10 + 1;
        index++;
    }
}
// Deconstructor for destroying the Safearray class
Safearray::~Safearray()
{
    delete [] array;
    cout << "Array destroyed.\n"<<endl;
}
// Getting the Safearray size
int Safearray::arraySize()
{
    return size;
}
// Overloading []
int Safearray::operator [](int i)
{
    if ( i >= lower && i <= upper )
    {
        cout << "Array Element in index "<<i<<" is ";
        return array[i - lower];
    }
    else
    {
        cout << "Array index is out of bound!!" << endl;
        exit(0);
        return -1;
        
    }
}
