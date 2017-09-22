/*
 Aingty Eung
 CECS 282 Lab 5
 */
#ifndef Payroll_System_hpp
#define Payroll_System_hpp

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

class Date{
    int day;
    int month;
    int year;
public:
    void setDate(int, int, int);
    void showDate();
};

class Employee{
    string lastname;
    string firstname;
    string idnumber;
    char sex;
    Date birthDate;
    double FACULTY_MONTHLY_SALARY = 5000.00;
    double STAFF_MONTHLY_HOURS_WORKED = 160;
public:
    //Function used to display all the infomations of the Employee Class
    void virtual putData();
    //List of set functions for the Employee class
    void setLastname(string lastname);
    void setFirstname(string firstname);
    void setIdnumber(string idnumber);
    void setSex(char sex);
    void setBirthdate(int month, int day, int year);
    //List of get functions for the Employee Class
    string getLastname();
    string getFirstname();
    string getIdnumber();
    char getSex();
    void getBirthdate();
    double getFacultySalary();
    double getStaffHours();
    //Pure virtual function for Employee Class 
    double virtual monthlyEarning() = 0;
};

class Staff : public Employee{
    double hourlyRate;
public:
    Staff();
    Staff(string lastname, string firstname, string idnumber, char sex, int month, int day, int year,double rateHour);
    void setHourlyrate(double rateHour);
    double getHourlyrate();
    double monthlyEarning();
    void putData();
};

class Education{
    string Degree;
    string Major;
    int    Research;
public:
    Education();
    void setDegree(string degree);
    void setMajor(string major);
    void setResearch(int researches);
    string getDregree();
    string getMajor();
    int getResearch();
};

class Faculty : public Employee{
    string Level;
    Education Status;
public:
    Faculty(string lastname, string firstname, string idnumber, char sex, int month, int day, int year,string level, string degree, string major, int researches);
    void setLevel(string level);
    string getLevel();
    double monthlyEarning();
    void putData();
};

class Partime : public Staff{
    int Hours; //Hours worked per week
public:
    Partime(string lastname, string firstname, string idnumber, char sex, int month, int day, int year, double hourRate, int hours);
    void setHours(int hours);
    double getHours();
    double monthlyEarning();
    void putData();
};
#endif /* Payroll_System_hpp */
