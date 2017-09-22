/*
 Aingty Eung
 CECS 282 Lab 5
 */
#include "Payroll_System.hpp"

void Employee::putData(){
    cout << "Employee Name: "<<Employee::getLastname()<<", "<<Employee::getFirstname()<<endl;
    cout << "Employee ID Number: "<<Employee::idnumber<<endl;
    cout << "Employee Sex: "<<Employee::getSex()<<endl;
    Employee::getBirthdate();
}

void Employee::setLastname(string lastname){
    Employee::lastname = lastname;
}
void Employee::setFirstname(string firstname){
    Employee::firstname = firstname;
}
void Employee::setIdnumber(string idnumber){
    Employee::idnumber = idnumber;
}
void Employee::setSex(char sex){
    Employee::sex = sex;
}
void Employee::setBirthdate(int month, int day, int year){
    birthDate.setDate(month, day, year);
}

string Employee::getLastname(){
    return Employee::lastname;
}
string Employee::getFirstname(){
    return Employee::firstname;
}
string Employee::getIdnumber(){
    return Employee::idnumber;
}
char Employee::getSex(){
    return Employee::sex;
}
void Employee::getBirthdate(){
    birthDate.showDate();
}
double Employee::getFacultySalary(){
    return Employee::FACULTY_MONTHLY_SALARY;
}
double Employee::getStaffHours(){
    return Employee::STAFF_MONTHLY_HOURS_WORKED;
}
