/*
 Aingty Eung
 CECS 282 Lab 4 Program 2
 September 15, 2016
 */


#include <iostream>
#include "PointType.hpp"

using namespace std;

void PointType::setPoint(double x, double y)
{
    xCoordinate = x;
    yCoordinate = y;
}

void PointType::print() const
{
    cout << "(" << xCoordinate << ", " << yCoordinate << ")" << endl;
}

double PointType::getX() const
{
    return xCoordinate;
}

double PointType::getY() const
{
    return yCoordinate;
}

PointType::PointType(double x, double y)
{
    xCoordinate = x;
    yCoordinate = y;
}
