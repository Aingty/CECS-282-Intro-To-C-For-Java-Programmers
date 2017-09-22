/*
 Aingty Eung
 CECS 282 Lab 5
 */
#include "Payroll_System.hpp"

void Education::setDegree(string degree){
    Education::Degree = degree;
}
void Education::setMajor(string major){
    Education::Major = major;
}
void Education::setResearch(int researches){
    Education::Research = researches;
}

string Education::getDregree(){
    return Education::Degree;
}
string Education::getMajor(){
    return Education::Major;
}
int Education::getResearch(){
    return Education::Research;
}
Education::Education(){}
