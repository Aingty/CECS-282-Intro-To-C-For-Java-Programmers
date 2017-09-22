/*
 Aingty Eung
 CECS 282 Lab 5
 */
#include "Payroll_System.hpp"

void Date::setDate(int x, int y, int z){
    Date::month = x;
    Date::day   = y;
    Date::year  = z;
}
void Date::showDate(){
    cout << "Birth Date: "<< month << "/" << day << "/19" << year << endl;
}
