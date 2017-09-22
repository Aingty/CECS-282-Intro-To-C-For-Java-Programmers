/*
 Aingty Eung
 CECS 282 Lab 4 Program 2
 September 15, 2016
 */

#include <iostream>
#include "CircleType.hpp"

using namespace std;

void CircleType::print() const
{
    cout << "Center: ";
    PointType::print();
    cout << endl;
    
    cout << "Radius: " << radius << endl;
    cout << "Circumference: " << getCircumference() << endl;
    cout << "Area: " << getArea() << endl;
}

void CircleType::setRadius(double r)
{
    radius = r;
}

double CircleType::getRadius() const
{
    return radius;
}

double CircleType::getCircumference() const
{
    return (2 * 3.1416 * radius);
}

double CircleType::getArea() const
{
    return (3.1416 * radius * radius);
}

CircleType::CircleType(double x, double y, double r)
:PointType(x,y)
{
    radius = r;
}
