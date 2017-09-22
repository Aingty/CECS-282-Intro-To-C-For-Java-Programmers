/*
 Aingty Eung
 CECS 282 Lab 6 Overloading Functions
 */
#ifndef Overloading_hpp
#define Overloading_hpp

#include <stdio.h>
#include <iostream>
#include "math.h"
#include <sstream>

using namespace std;

class Fracpri
{
    int whole; //Whole number
    int numer; //Numerator of the Fraction
    int denom; //Denominator of the Fraction
public:
    Fracpri();
    Fracpri(int, int, int);
    Fracpri(float); //This is used to convert from Decimal to Fraction
    void getFraction();
    void showFraction();
    Fracpri addFracts(Fracpri a, Fracpri b);
    //Overloading the operators for Fracpri
    friend Fracpri operator + (Fracpri, int);
    friend Fracpri operator + (int, Fracpri);
    Fracpri operator + (Fracpri);
    Fracpri operator - (Fracpri);
    Fracpri operator * (Fracpri);
    Fracpri operator / (Fracpri);
    operator float(); //Used to convert from Fracpri to Float
    bool operator < (Fracpri);
    void operator += (int);
    friend istream &operator >> (istream &in, Fracpri &o);
    friend ostream &operator << (ostream &out, Fracpri &o);
};
#endif /* Overloading_hpp */
