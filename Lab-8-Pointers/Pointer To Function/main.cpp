/*
 Aingty Eung
 CECS 282 Lab 8 Program 3 Main
 013462772
 */

#include <iostream>
using namespace std;

void bubble_sort(int *, int, bool (*)(int,int));
bool ascending(int, int);
bool descending(int, int);

int main() {
    int *p, size, decision;
    bool (*f)(int, int), keepGoing = true;
    cout << "Please input the array's size to be sorted." << endl;
    cin >> size;
    cin.ignore();
    p = new int[size];
    cout << "Please input the array elements for sorting." << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> p[i];
        cin.ignore();
    }
    while (keepGoing)
    {
        cout << "Sort in ascending or descending?\n\t1. ascending\n\t2. descending\n\t3. quit" << endl;
        cin >> decision;
        cin.ignore();
        //Loop to error check the user's decision
        while (decision != 1 && decision != 2 && decision != 3)
        {
            cout << "INVALID INPUT!!!!"<<endl;
            cout << "Sort in ascending or descending?\n\t1. ascending\n\t2. descending" << endl;
        }
        if (decision == 1)
        {
            f = ascending;
            bubble_sort(p, size, f);
            //Displaying the Assending Sorted List
            cout << "ascending List: ";
            for (int i = 0; i < size; i++)
            {
                cout << p[i];
                if (i == size - 1)
                {
                    cout << "\n\n";
                }
                else
                {
                    cout << ", ";
                }
            }
        }
        else if (decision == 2)
        {
            f = descending;
            bubble_sort(p, size, f);
            //Displaying the descending Sorted List
            cout << "descending List: ";
            for (int i = 0; i < size; i++)
            {
                cout << p[i];
                if (i == size - 1)
                {
                    cout << "\n\n";
                }
                else
                {
                    cout << ", ";
                }
            }
        }
        else
        {
            keepGoing = false;
        }

    }
    delete p;
    return 0;
}
/*----------------------------------------------------------------------*/
bool ascending(int a, int b)
{
    return a > b; // If true, then high to low which is not ascending
}
bool descending(int a, int b)
{
    return a < b; // If true, then low to high which is not descending
}
void bubble_sort(int *p, int size, bool (*f)(int, int))
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if ((*f)(p[i], p[j]))
            {
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}
