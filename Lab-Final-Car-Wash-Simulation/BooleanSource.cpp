//
//  BooleanSource.cpp
//  CECS 282 Final Project
//
//  Created by Aingty Eung on 12/14/16.
//  Copyright © 2016 Aingty Eung. All rights reserved.
//

#include "Header.hpp"
#include <stdlib.h> /* srand, rand */
#include <time.h>
#include <stdio.h>
BooleanSource::BooleanSource(float p)
{
    BooleanSource::probability = p;
}
bool BooleanSource::query()
{
    if (BooleanSource::probability == 0)
    {
        return false;
    }
    else
    {
        float randGen = (float)rand() / RAND_MAX;
        if ( randGen <= BooleanSource::probability)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
