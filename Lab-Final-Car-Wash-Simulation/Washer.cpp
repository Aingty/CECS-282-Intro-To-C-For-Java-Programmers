//
//  Washer.cpp
//  CECS 282 Final Project
//
//  Created by Aingty Eung on 12/8/16.
//  Copyright © 2016 Aingty Eung. All rights reserved.
//

#include "Header.hpp"

Washer::Washer()
{
    Washer::secondsForWash = 0;
    Washer::washTimeLeft = 0;
}
Washer::Washer(int seconds)
{
    Washer::washTimeLeft = seconds;
}
void Washer::startWashing()
{
    Washer::secondsForWash +=1;
}
void Washer::oneSecond()
{
    Washer::washTimeLeft -=1;
}
bool Washer::isBusy()
{
    return Washer::washTimeLeft>0;
}
