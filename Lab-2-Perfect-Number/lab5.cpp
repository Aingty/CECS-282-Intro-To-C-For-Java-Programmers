//
//  lab5.cpp
//  Perfect Number
//
//  Created by Aingty Eung on 9/8/16.
//  Copyright © 2016 Aingty Eung. All rights reserved.
//

#include "lab5.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

namespace lab5
{
    float calculateBalanceDue(float balanceDue, float paymentAmt)
    {
        float balance = balanceDue - paymentAmt;
        return balance;
    }
    
    void displayColumnTitle()
    {
        cout <<"Month \t" << " \t \t Balance Due" << endl;
    }
    
    void displayBalance(int month, float balanceDue)
    {
        cout << month << "\t" << "\t \t      " << fixed << setprecision(2) << balanceDue << endl;
    }
}
