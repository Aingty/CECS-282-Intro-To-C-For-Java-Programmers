/*
 Aingty Eung
 013462772
 CECS 282 Lab 2 Perfect Numbers Program 3
 9/06/16
 */
#include <iostream>
#include <iomanip>
#include "lab5.hpp"

using namespace std;
using namespace lab5;

int main() {
    
    bool keepGoing = true;
    
    while(keepGoing)
    {
        cout << "Enter Account number: (-1 to terminate)"<< endl;
        int accountNumber;
        cin >> accountNumber;
        cin.ignore(); //Used to ignore the input of the character so that the next "getline()" won't be skip.
        if(accountNumber == -1)
        {
            return 0;
        }
        else
        {
            cout <<"Enter Your name: ";
            string accountName;
            getline(cin,accountName);
            cout << "Enter balance due: "<<endl;
            float balanceDue = 0.0;
            cin >> balanceDue;
            cout << endl;
            
            //Displaying the Name and Account Number
            cout << "Account Number: "<<accountNumber<<endl;
            cout << "Account Name: "<<accountName<<endl;
            
            //Outputting the Monthly Balance
            displayColumnTitle();
            float monthlyPayment = 0.00;
            monthlyPayment = balanceDue * 0.1;
            for (int i = 1; i <= 10; i++)
            {
                
                balanceDue = calculateBalanceDue(balanceDue, monthlyPayment);
                displayBalance(i, balanceDue);
            }
            cout << endl;
        }
    }
    return 0;
    
}
