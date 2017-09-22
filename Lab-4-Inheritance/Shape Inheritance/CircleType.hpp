/*
 Aingty Eung
 CECS 282 Lab 4 Program 2
 September 15, 2016
 */


#ifndef H_CircleType
#define H_CircleType

#include "PointType.hpp"

class CircleType: public PointType
{
public:
    void print() const;
    void setRadius(double r);
    double getRadius() const;
    double getCircumference() const;
    double getArea() const;
    CircleType(double x = 0.0, double y = 0.0, double r = 0.0);
    
protected:
    double radius;
};

#endif
