/*
    Aingty Eung
    CECS 282 Lab 4 Program 1 (Sales() Functions)
    Due Date: 9/20/16
*/
#include "InheritanceHeader.hpp"

int Sales::getArraySize()
{
    return sizeof(salesRecord)/sizeof(*salesRecord);
}

void Sales::getData()
{
    int num = 1;// Used to display the row number for input
    cout << "Please input the 3 sales record for the book, each followed by ENTER:" <<endl;
    for (int i = 0; i < getArraySize(); i++)
    {
        cout << num << ". $";
        cin >> salesRecord[i];
        num++;
    }
}

void Sales::putData()
{
    int num = 1;//Used to display the row number for input
    double roundedNumber = 0; //Used to round off the dollar to the nearest 100th Cents
    cout << "Sales Record: " <<endl;
    for (int i = 0; i < getArraySize(); i++)
    {
        roundedNumber = (double)floor(salesRecord[i] * 100 + 0.5)/100;
        cout << right << setw(10) << num << ". $"<< roundedNumber <<endl;
        num++;
    }
}
