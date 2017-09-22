//
//  Header.hpp
//  CECS 282 Final Project
//
//  Created by Aingty Eung on 12/8/16.
//  Copyright © 2016 Aingty Eung. All rights reserved.
//

#ifndef Header_hpp
#define Header_hpp

#include <stdio.h>

class Washer
{
private:
    int secondsForWash, washTimeLeft;
public:
    Washer();
    Washer(int);// int for secondsForWash
    void startWashing();// Incrementing seconds for wash
    void oneSecond();// Decrementing washTimeLeft
    bool isBusy();// Check to see if washTimeLeft is not zero
};

class Average
{
private:
    double carSum, totalWaitingTime;
public:
    Average();
    int getCar();// Return the car sum
    int getTime();// Return the totalWaitingTime
    void moreCar();
    void nextCar(int);// Assumulate carSum and totalWaitingTime. Parameter is car's washing time.
};

class BooleanSource
{
private:
    float probability;
public:
    BooleanSource(float);// assign p to probability
    // Random generator to check on probablity, return true based on probability
    bool query();
    
};

#endif /* Header_hpp */
