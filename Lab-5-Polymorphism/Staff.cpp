/*
 Aingty Eung
 CECS 282 Lab 5
 */
#include "Payroll_System.hpp"

void Staff::setHourlyrate(double rateHour){
    Staff::hourlyRate = rateHour;
}
double Staff::getHourlyrate(){
    return Staff::hourlyRate;
}
double Staff::monthlyEarning(){
    return Staff::getHourlyrate() * Employee::getStaffHours();
}
void Staff::putData(){
    Employee::putData();
    cout << "Full Time \nHourly Rate: $"<<fixed<<setprecision(2)<<Staff::getHourlyrate()<<endl;
    cout <<"Monthly Salary: $"<<Staff::monthlyEarning()<<endl;
}
Staff::Staff(string lastname, string firstname, string idnumber, char sex, int month, int day, int year,double rateHour){
    Employee::setLastname(lastname);
    Employee::setFirstname(firstname);
    Employee::setIdnumber(idnumber);
    Employee::setSex(sex);
    Employee::setBirthdate(month, day, year);
    Staff::setHourlyrate(rateHour);
}
Staff::Staff(){
    setHourlyrate(10);
}
