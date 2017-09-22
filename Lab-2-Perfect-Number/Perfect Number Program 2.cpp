/*
 Aingty Eung
 013462772
 CECS 282 Lab 2 Perfect Numbers Program 2
 9/06/16
 */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    bool keepGoing;
    while (keepGoing)
    {
        // Getting the user's number input as an integer
        double number;
        cout << "Please input the number to be tested. (Numbers with decimal will be rounded)" << endl;
        cin >> number;
        
        // Checking user's input for negative or zero number
        while(number <= 0)
        {
            cout << "You input an invalid number. Negative values or zero are invalid." << endl << "Please input another number." << endl;
            cin >> number;
            cout << "\n";
        }
        
        number = ceil(number - 0.4); // This statement is used to round the number if user input with a decimal
        int number1 = (int)number;
        int sum = 0;
        for(int j = 1; j <= number/2; j++)
        {
            if(number1 % j == 0)
            {
                sum = sum + j;
            }
            
        }
        //If-Else statement used to congratulate or dissappoint the user of their perfect number
        if (sum == number1)
        {
            cout << "Congratulation!!! You input a perfect number: "<< number1 << "\n \n";
        }
        else
        {
            cout << "Sorry, the number " << number1 << " is not a perfect number." << endl << "\n";
        }
        // While loop used to check the user's response if they want to keep going.
        bool testingResponse = true;
        while (testingResponse)
        {
            int response;
            cout << "Would you like to input another number?" << endl << "1. Yes" << endl << "2. No" << endl;
            cin >> response;
            cout << "\n";
            // Jake's code
            if(response == 1){
                testingResponse = false;
            }
            else if(response == 2){
                return 0;
            }
            else{
                cout << "Sorry, your input was not valid." << endl;
            }
            
        }
        
    }
    
    
    return 0;
}
