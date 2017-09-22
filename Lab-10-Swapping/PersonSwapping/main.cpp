/*
 Aingty Eung
 013462772
 CECS 282 Lab 10 Program 2 Main File
 */
#include "Person.hpp"
#include <set>
#include <algorithm>
int main() {
    // Initializing the people
    Person* ptrP1 = new Person("KuangThu", "Bruce", 4157300);
    Person* ptrP2 = new Person("KuangThu", "William", 8435150);
    Person* ptrP3 = new Person("Wellington", "John", 9207404);
    Person* ptrP4 = new Person("Bartoski", "Peter", 6946473);
    Person* ptrP5 = new Person("McDonald", "Stacey", 7849982);
    Person* ptrP6 = new Person("McDonald", "Stacey", 7764987);
    
    // Multiset of Persons
    multiset<Person*, comparePersons> persSet;
    
    // Put Persons in multiset
    persSet.insert(ptrP1);
    persSet.insert(ptrP2);
    persSet.insert(ptrP3);
    persSet.insert(ptrP4);
    persSet.insert(ptrP5);
    persSet.insert(ptrP6);
    
    // Displaying the set after the insert
    cout << "Here is the list of people:";
    for_each(persSet.begin(),persSet.end(), displayPerson() );
    cout << "\n\n";
    
    // Deleting the multiset
    persSet.erase(ptrP1);
    persSet.erase(ptrP2);
    persSet.erase(ptrP3);
    persSet.erase(ptrP4);
    persSet.erase(ptrP5);
    persSet.erase(ptrP6);
    return 0;
}

