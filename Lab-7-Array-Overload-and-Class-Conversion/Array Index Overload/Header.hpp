/*
 Aingty Eung
 CECS 282 Program 7 Class to Class Conversion
 October 25, 2016
 */

#ifndef Header_hpp
#define Header_hpp

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Safearray
{
private:
    int upper, lower, size;
    int * array;
public:
    Safearray();
    Safearray(int, int);
    ~Safearray();
    int arraySize();
    int operator [](int);
};
#endif /* Header_hpp */
