/*
 Aingty Eung
 CECS 282 Lab 5
 */
#include "Payroll_System.hpp"

void Faculty::setLevel(string level){
    Faculty::Level = level;
}
string Faculty::getLevel(){
    return Faculty::Level;
}
double Faculty::monthlyEarning(){
    string stringTest = Faculty::getLevel();
    if (stringTest.compare("AS") == 0){
        return Employee::getFacultySalary();
    }else if (stringTest.compare("AO") == 0){
        return Employee::getFacultySalary() * 1.2;
    }else{
        return Employee::getFacultySalary() * 1.4;
    }
}
void Faculty::putData(){
    Employee::putData();
    string stringTest = Faculty::getLevel();
    if (stringTest.compare("AS") == 0){
        cout << "Assistance Professor"<<endl;
    }else if (stringTest.compare("AO") == 0){
        cout << "Associate Professor"<<endl;
    }else{
        cout << "Full Professor"<<endl;
    }
    cout << "Monthly Salary: $"<<fixed<<setprecision(2)<<Faculty::monthlyEarning()<<endl;
}
Faculty::Faculty(string lastname, string firstname, string idnumber, char sex, int month, int day, int year,string level, string degree, string major, int researches){
    Employee::setLastname(lastname);
    Employee::setFirstname(firstname);
    Employee::setIdnumber(idnumber);
    Employee::setSex(sex);
    Employee::setBirthdate(month, day, year);
    Faculty::setLevel(level);
    Faculty::Status.setDegree(degree);
    Faculty::Status.setMajor(major);
    Faculty::Status.setResearch(researches);
}
