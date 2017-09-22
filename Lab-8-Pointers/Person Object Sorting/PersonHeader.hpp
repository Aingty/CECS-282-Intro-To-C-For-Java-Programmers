/*
 Aingty Eung
 CECS 282 Lab 8 Program 1 PersonHeader File
 013462772
 */

#ifndef PersonHeader_hpp
#define PersonHeader_hpp

#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

class Person
{
private:
    string name;
    float salary;
public:
    void setPerson();
    void printName();
    string getName();
    float getSalary();
    
};
#endif /* PersonHeaderHeader_hpp */
