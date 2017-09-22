/*
    Aingty Eung
    CECS 282 Lab 4 Program 1 (Main() File)
    Due Date: 9/20/16
 */
#include <iostream>
#include "InheritanceHeader.hpp"

int main() {
    int userInput;//Used to get the user's input of Book or eBook
    bool keepGoing = true;//Used to continue the program if the user wants to input another book
    while (keepGoing)
    {
        cout << "Welcome to the Library."<<endl << right << setw(5)<< "Please select which type of book."<<endl;
        cout << "\t" << "1. Book (hardcopy)"<<endl <<"\t"<<"2. eBook (Digitalcopy)"<<endl;
        cin >> userInput;
        cin.ignore();
        while(userInput!=1 && userInput!=2)
        {
            cout << "Sorry, your input is invalid"<<endl<< "\t" << "1. Book (hardcopy)"<<endl << "\t"<<"2. eBook (Digitalcopy)"<<endl;
            cin >> userInput;
            cin.ignore();
        }
        if (userInput == 1)
        {
            Book a;
            a.getData();
            a.putData();
        }
        else
        {
            eBook b;
            b.getData();
            b.putData();
        }
        userInput = 0;
        while (userInput!=1 && userInput!=2)
        {
            cout << "Would you like to input another book? \n \t 1.Yes \n \t 2.No"<<endl;
            cin >> userInput;
            cin.ignore();
        }
        if (userInput == 1)
        {
            continue;
        }
        else
        {
            return 0;
        }

    }
    return 0;
}
