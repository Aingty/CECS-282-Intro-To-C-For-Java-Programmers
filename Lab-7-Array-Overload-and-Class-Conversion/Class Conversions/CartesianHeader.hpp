/*
 Aingty Eung
 CECS 282 Program 7 Class to Class Conversion
 October 25, 2016
 */

#ifndef CartesianHeader_hpp
#define CartesianHeader_hpp

#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

class Polar; // This is done inorder for Cartesian to accept Polar
class Cartesian
{
private:
    double x, y;
public:
    Cartesian();
    Cartesian(double, double);
    Cartesian(Polar);
    void display();
    double getX();
    double getY();
    Cartesian operator +(Cartesian);
};
#endif /* CartesianHeader_hpp */
