/*
    Aingty Eung
    CECS 282 Lab 4 Program 1 (Book() Functions)
    Due Date: 9/20/16
*/


#include "InheritanceHeader.hpp"

void Book::getData()
{
    Publication::getData();
    Sales::getData();
    cout << "Please input the hardcopy page count: "<< endl;
    cin >> pageCount;
    cin.ignore();
    cout << "\n";
}

void Book::putData()
{
    cout <<"\t \t Here is the Full information on your Book(hardcopy): \n"<<endl;
    Publication::putData();
    Sales::putData();
    cout << "Book's page count: "<<pageCount << endl;
    cout <<"\n";
}

