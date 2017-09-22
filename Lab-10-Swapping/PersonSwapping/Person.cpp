/*
 Aingty Eung
 013462772
 CECS 282 Lab 10 Program 2 Header File
 */
#include "Person.hpp"
// overloaded == for Person class
bool operator==(const Person& p1, const Person& p2)
{
    return (p1.lastName == p2.lastName &&
            p1.firstName == p2.firstName ) ? true : false;
}

// overloaded < for Person class
bool operator<(const Person& p1, const Person& p2)
{
    if(p1.lastName == p2.lastName)
    {
        if (p1.firstName == p2.firstName)
        {
            // Added for comparing phone number if 2 people have same first and last name
            return (p1.phoneNumber < p2.phoneNumber) ? true : false;
        }
        return (p1.firstName < p2.firstName) ? true : false;

    }
    return (p1.lastName < p2.lastName) ? true : false;
}
