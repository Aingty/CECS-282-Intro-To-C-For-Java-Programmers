/*
    Aingty Eung
    013462772
    CECS 282 
    Lab Assignment 3 Rainfall Program 1
 */

#include <iostream>
#include "rainFall.hpp"
using namespace std;


int main(){
    int sizeOfArray = 11;
    cout << "This program will calculate and classify the rainfall for one year. \n"<<endl;
    
    RainFall r;
    
    int rainFallArrayMain[sizeOfArray];
    
    for (int i = 0; i <= sizeOfArray; i++)
    {
        rainFallArrayMain[i] = r.getArrayElement(i);
    }
    r.classifyAndDisplayRainfall(rainFallArrayMain);
    
    return 0;
}
