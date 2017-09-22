//
//  2D_Array_Functions.hpp
//  Rainfall Calculations
//
//  Created by Aingty Eung on 9/12/16.
//  Copyright © 2016 Aingty Eung. All rights reserved.
//

#ifndef _D_Array_Functions_hpp
#define _D_Array_Functions_hpp

#include <stdio.h>


int getTotal(int testArray[][5], int, int);
double getAverage(int testArray[][5], int rows, int columns);
int getRowTotal(int testArray[][5], int rows, int columns);
int getColumnTotal(int testArray[][5], int rows, int columns);
int getHighestInRow(int testArray[][5], int rows, int columns);
int getLowestInRow(int testArray[][5], int rows, int columns);

#endif /* _D_Array_Functions_hpp */
