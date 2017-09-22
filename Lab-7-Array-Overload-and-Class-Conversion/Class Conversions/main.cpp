/*
 Aingty Eung
 CECS 282 Program 7 Class to Class Conversion
 October 25, 2016
 */
#include "PolarHeader.hpp"

int main() {
    Polar p1(10.0, 0.0);
    Polar p2(10.0, 1.570796325);
    Polar p3;
    
    p3 = p1 + p2;
    
    cout << "\np1="; p1.display(); //display all Polars
    cout << "\np2="; p2.display();
    cout << "\np3="; p3.display();
    cout << endl;
    return 0;
}
