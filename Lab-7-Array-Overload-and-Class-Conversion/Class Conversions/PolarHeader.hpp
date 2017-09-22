/*
 Aingty Eung
 CECS 282 Program 7 Class to Class Conversion
 October 25, 2016
 */
#ifndef PolarHeader_hpp
#define PolarHeader_hpp

#include <stdio.h>
#include <iostream>
#include <math.h>
#include "CartesianHeader.hpp"

using namespace std;

class Polar
{
private:
    double radius, angle;
public:
    Polar();
    Polar(double, double);
    Polar(Cartesian);
    void display();
    double getRadius();
    double getAngle();
    Polar operator +(Polar);
};


#endif /* PolarHeader_hpp */
