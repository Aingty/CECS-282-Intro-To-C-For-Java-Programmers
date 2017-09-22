/*
 Aingty Eung
 CECS 282 Lab 4 Program 2
 September 15, 2016
 */

#include "CylinderType.hpp"
#include <iostream>

using namespace std;

void CylinderType::print() const
{
    CircleType::print();
    cout << "Cylinder Height: "<< CylinderType::getHeight()<<endl;
    cout << "Cylinder Surface Area: "<<CylinderType::getSurfaceArea()<<endl;
    cout << "Cylinder Volume: " << CylinderType::getVolume()<<endl;
}

void CylinderType::setHeight(double h)
{
    height = h;
}

void CylinderType::setBaseCenter(double x, double y)
{
    PointType::setPoint(x, y);
}

void CylinderType::setCenterRadiusHeight(double x, double y, double r, double h)
{
    CylinderType::setHeight(h);
    CylinderType::setBaseCenter(x,y);
    CircleType::setRadius(r);
}

double CylinderType::getHeight() const
{
    return height;
}

double CylinderType::getVolume() const
{
    return CircleType::getArea() * CylinderType::getHeight();
}

double CylinderType::getSurfaceArea() const
{
    return (CircleType::getCircumference() * CylinderType::getHeight()) + (2 * CircleType::getArea());
}

CylinderType::CylinderType(double x, double y, double r, double h)
:CircleType( x, y, r)
{
    height = h;
}
