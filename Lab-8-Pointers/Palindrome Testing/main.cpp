/*
 Aingty Eung
 CECS 282 Lab 8 Program 2 Main
 013462772
 */

#include <iostream>
using namespace std;

void transform(char*, char*);
bool testPalindrome(char*);
int main() {
    string userInput;
    char * palindromeStr;
    char * transformedStr;
    int choice;
    bool keepGoing = true;
    while (keepGoing)
    {
        choice = 0;
        cout << "Please input the string used to test for Palindrome."<<endl;
        getline(cin, userInput);
        palindromeStr = new char[userInput.size()];
        transformedStr = new char[userInput.size()];
        for (int i = 0; i < userInput.size(); i++)
        {
            palindromeStr[i] = userInput[i];
        }
        transform(palindromeStr, transformedStr);
        if (testPalindrome(transformedStr))
        {
            cout << "Yes, \"" << userInput << "\" is a Palindrome!" << endl;
        }
        else
        {
            cout << "No, \"" << userInput << "\" is NOT a Palindrome!" << endl;
        }
        delete palindromeStr;
        delete transformedStr;
        while (choice != 1 && choice != 2)
        {
            cout << "Input another?\n\t1. Yes\n\t2. No"<<endl;
            cin >> choice;
            cin.ignore();
        }
        if (choice == 1)
        {
            keepGoing = true;
        }
        else
        {
            keepGoing = false;
        }
        
    }
    return 0;
}

/*------------------------------------------*/
//transform function to convert string into Palindrome Testing
void transform(char * raw, char * testStr)
{
    int k = 0; //Use for testStr incrementation
    for (int i = 0; i < strlen(raw); i++)
    {
        if (isalpha(raw[i]) == 1 || isdigit(raw[i]) == 1)
        {
            raw[i] = toupper(raw[i]);
            testStr[k] = raw[i];
            k++;
        }
    }
}
//Test to see if string is Palindrome
bool testPalindrome(char *str)
{
    int endingTest = 0; //Used to start at the end of the string for backward checking
    for (int i = 0; i < strlen(str); i++) //This for loop is used to get the true size of str
    {
        if (isalpha(str[i]) == 1 || isdigit(str[i]) == 1)
        {
            endingTest++;
        }
    }
    endingTest = endingTest - 1; //We decrement the true size of str to get the last element
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == str[endingTest])
        {
            endingTest--;
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}
