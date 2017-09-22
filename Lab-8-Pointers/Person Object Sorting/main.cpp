/*
 Aingty Eung
 CECS 282 Lab 8 Program 1 Main
 013462772
 */

#include "PersonHeader.hpp"

void bsort(Person **, int, bool);
void order(Person **, Person **);
int main() {
    Person * perPtr[100];
    bool sortMethod, keepGoing = true;
    int n = 0, choice = 0;
    string choice1;
    do
    {
        perPtr[n] = new Person;
        perPtr[n] -> setPerson();
        n++;
        cout << "Enter another? (y/n)" << endl;
        getline(cin, choice1);
        //Loop to error check user's input to enter another person or not
        while (!(choice1.compare("y")==0) && !(choice1.compare("Y")==0) && !(choice1.compare("n")==0) && !(choice1.compare("N")==0))
        {
            cout << "Sorry, INVALID INPUT!!!\nEnter another? (y/n)"<<endl;
            getline(cin, choice1);
        }
    }while (choice1.compare("y") == 0 || choice1.compare("Y")==0);
    //Displaying Unsorted list
    cout << "Unsorted List: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\t";
        perPtr[i] -> printName();
    }
    while (keepGoing)
    {
        while (choice != 1 && choice != 2)
        {
            cout << "How would you like to sort this? \n\t1. By Name\n\t2. By Salary" << endl;
            cin >> choice;
            cin.ignore();
        }
        if (choice == 1)
        {
            sortMethod = true;
            bsort(perPtr, n, sortMethod); //Sort by pointers
        }
        else
        {
            sortMethod = false;
            bsort(perPtr, n, sortMethod); //Sort by pointers
        }
        cout << "\n";
        cout << "Sorted List: " << endl;
        //Displaying Sorted list
        for (int i = 0; i < n; i++)
        {
            cout << "\t";
            perPtr[i] -> printName();
        }
        choice = 0;
        cout << "Would you like to continue? y/n"<<endl;
        getline(cin, choice1);
        while (!(choice1.compare("y")==0) && !(choice1.compare("Y")==0) && !(choice1.compare("n")==0) && !(choice1.compare("N")==0))
        {
            cout << "Sorry, INVALID INPUT!!!\nContinue? (y/n)"<<endl;
            getline(cin, choice1);
        }
        if (choice1.compare("y") == 0 || choice1.compare("Y")==0)
        {
            keepGoing = true;
        }
        else
            keepGoing = false;
    }
    //Deleting the array.
    cout << "\nDeleting list: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << perPtr[i] -> getName() << " deleted!" << endl;
        delete perPtr[i];
    }
    cout << "\n";
    return 0;
}
/*-----------------------------------------------*/
//Swapping the 2 person
void order(Person ** p1, Person ** p2)
{
    Person * temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
//Bubble sort pointer to person
void bsort(Person **pp, int n, bool s)
{
    if (s)
    {   //Use the order body for this one since s = true, sort by name
        for (int j = 0; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                // Needed these 2 Person Object because it didn't work otherwise
                Person **p1 = (pp+j);
                Person **p2 = (pp+k);
                string temp1 = (*p1) -> getName();
                string temp2 = (*p2) -> getName();
                for (int i = 0; i < temp1.size(); i++)
                {
                    temp1[i] = tolower(temp1[i]);
                }
                for (int i = 0; i < temp2.size(); i++)
                {
                    temp2[i] = tolower(temp2[i]);
                }
                if (temp1.compare(temp2) >= 0)
                {
                    order(pp+j, pp+k); //Swapping
                }
            }
        }
    }
    else
    {
        for (int j = 0; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                Person **p1 = (pp+j);
                Person **p2 = (pp+k);
                float temp1 = (*p1) -> getSalary();
                float temp2 = (*p2) -> getSalary();
                if (temp1 < temp2)
                {
                    order(pp+j, pp+k); //Swapping
                }
            }
        }
    }
}
