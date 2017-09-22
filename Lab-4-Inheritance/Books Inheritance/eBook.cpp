/*
    Aingty Eung
    CECS 282 Lab 4 Program 1 (eBook() Functions)
    Due Date: 9/20/16
*/
#include "InheritanceHeader.hpp"

void eBook::getData()
{
    Publication::getData();
    Sales::getData();
    cout << "Please input the MB size of the eBook: "<<endl;
    cin >> MB;
    cin.ignore();
    cout << "\n";
}

void eBook::putData()
{
    cout <<"\t \t Here is the Full information on your eBook(digital): \n"<<endl;
    Publication::putData();
    Sales::putData();
    cout << "eBook's MB size: "<< MB << endl;
    cout << "\n";
}
