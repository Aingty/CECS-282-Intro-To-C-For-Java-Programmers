/*
 Aingty Eung
 CECS 282 Program 7 Class to Class Conversion
 October 25, 2016
 */

#include "PolarHeader.hpp"
#include "CartesianHeader.hpp"

Cartesian::Cartesian()
{
    x = 0;
    y = 0;
}

Cartesian::Cartesian(double x1, double y1)
{
    x = x1;
    y = y1;
}
Cartesian::Cartesian(Polar p)
{
    double r = p.getRadius();
    double a = p.getAngle();
    x = r * cos(a);
    y = r * sin(a);
}
void Cartesian::display()
{
    cout << "(" << x << ", " << y << ")" << endl;
}
double Cartesian::getX()
{
    return x;
}
double Cartesian::getY()
{
    return y;
}
Cartesian Cartesian::operator+(Cartesian c)
{
    c.x = x + c.x;
    c.y = y + c.y;
    return c;
}
