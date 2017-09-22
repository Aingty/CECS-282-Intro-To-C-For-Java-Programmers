/*
 Aingty Eung
 CECS 282 Program 7 Class to Class Conversion
 October 25, 2016
 */

#include "PolarHeader.hpp"

Polar::Polar()
{
    radius = 0.0;
    angle = 0.0;
}
Polar::Polar(double r, double a)
{
    radius = r;
    angle = a;
}
Polar::Polar(Cartesian c)
{
    radius = sqrt(pow(c.getX(),2) + pow(c.getY(), 2));
    angle = atan(c.getY()/c.getX());
}

Polar Polar::operator+(Polar p)
{
    Polar c;
    Cartesian a = p;
    Cartesian b = *this; // "*this" is a pointer to the implicit class Polar. Pointing to itself
    c = a + b; // Add the Cartesian then store it as a conversion to polar.
    return c;
}
void Polar::display()
{
    cout << "(" << radius << ", " << angle << ")";
}
double Polar::getRadius()
{
    return radius;
}
double Polar::getAngle()
{
    return angle;
}
