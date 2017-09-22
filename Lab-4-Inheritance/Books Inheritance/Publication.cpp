/*
    Aingty Eung
    CECS 282 Lab 4 Program 1 (Publication() Functions)
    Due Date: 9/20/16
*/

#include "InheritanceHeader.hpp"

void Publication::getData()
{
    cout << "What is the title of the book? : ";
    getline(cin, title);
    cout << "What is price of the book? : $";
    cin >> price;
}

void Publication::putData()
{
    cout << "Book's Title: " << title << endl;
    cout << "Book's Price: $" << floor(price * 100 + 0.5) / 100 << endl;
}
