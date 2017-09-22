/*
 Aingty Eung
 CECS 282 Lab 8 Program 1 Person Class
 013462772
 */

#include "PersonHeader.hpp"

void Person::setPerson()
{
    cout << "Name: ";
    getline(cin, name);
    cout << "Salary: $";
    cin >> salary;
    cin.ignore();
}
void Person::printName()
{
    cout <<"Name: " << left << setw(25) << name << "Salary: $" << setw(15) << fixed << setprecision(2) << salary << endl;
}
string Person::getName()
{
    return name;
}
float Person::getSalary()
{
    return salary;
}
