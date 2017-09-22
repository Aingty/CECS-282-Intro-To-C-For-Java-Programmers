//
//  Average.cpp
//  CECS 282 Final Project
//
//  Created by Aingty Eung on 12/14/16.
//  Copyright © 2016 Aingty Eung. All rights reserved.
//

#include "Header.hpp"

Average::Average()
{
    Average::carSum = 0;
    Average::totalWaitingTime = 0;
}
int Average::getCar()
{
    return Average::carSum;
}
int Average::getTime()
{
    return Average::totalWaitingTime;
}
// Accumulate the total car being served
void Average::moreCar()
{
    Average::carSum +=1;
}
// Accumulate the total waiting time of the simulation
void Average::nextCar(int waiting)
{
    Average::totalWaitingTime += waiting;
}
