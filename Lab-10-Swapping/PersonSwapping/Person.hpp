/*
 Aingty Eung
 013462772
 CECS 282 Lab 10 Program 2 Person.cpp File
 */
#ifndef Person_hpp
#define Person_hpp
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string lastName;
    string firstName;
    long phoneNumber;
public:
    // default constructor
    Person() :
    lastName("blank"), firstName("blank"), phoneNumber(0L){  }
    // 3-arg constructor
    Person(string lana, string fina, long pho):lastName(lana), firstName(fina), phoneNumber(pho){  }
    friend bool operator<(const Person&, const Person&);
    friend bool operator==(const Person&, const Person&);
    // display Person's data
    void display() const
    {
        cout << endl << lastName << ",\t" << firstName
        << "\t\tPhone: " << phoneNumber;
    }
    // Return phone number
    long get_phone() const { return phoneNumber; }
}; //end class Person
/*---------------------------------------------------*/
// Function object to compare persons using pointers
class comparePersons
{
public:
    bool operator() (const Person* ptrP1, const Person* ptrP2) const { return *ptrP1 < *ptrP2; }
};
// Function object to display a person, using a pointer
class displayPerson
{
public:
    void operator() (const Person* ptrP) const { ptrP->display(); }
};
#endif /* Person_hpp */
