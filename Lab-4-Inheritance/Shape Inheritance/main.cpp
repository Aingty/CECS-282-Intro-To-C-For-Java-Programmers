/*
    Aingty Eung
    CECS 282 Lab 4 Program 2
    September 15, 2016
 */

#include "CylinderType.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    CylinderType cylinder1(3, 2.5, 4, 2.5);
    CylinderType cylinder2;
    
    cout << fixed << showpoint;
    cout << setprecision(2);
    
    cout << "***** Cylinder 1 *****" << endl;
    cylinder1.print();
    cout << endl;
    
    cylinder2.setPoint(-2.5, 7);
    cylinder2.setRadius(4);
    cylinder2.setHeight(3.9);
    cout << "***** Cylinder 2 *****" << endl;
    cylinder2.print();
    cout << endl;

    double x, y;
    double r;
    double h;
    
    CylinderType cylinder3;
    
    cout << "Enter x Coordinates of the center: ";
    cin >> x;
    cout << endl;
    
    cout << "Enter y Coordinate of the center: ";
    cin >> y;
    cout << endl;
    
    cout << "Enter base radius: ";
    cin >> r;
    cout << endl;
    
    cout << "Enter cylinder height: ";
    cin >> h;
    cout << endl;
    
    cylinder3.setCenterRadiusHeight(x, y, r, h);
    
    cout << "***** Cylinder 3 *****" << endl;
    cylinder3.print();
    cout << endl;
    
    return 0;
}
