//
//  2D_Array_Functions.cpp
//  Rainfall Calculations
//
//  Created by Aingty Eung on 9/12/16.
//  Copyright © 2016 Aingty Eung. All rights reserved.
//

#include "2D_Array_Functions.hpp"

//Finding the 2D array's size by using rows time columns
int getTotal(int testArray[][5], int rows, int columns)
{
    int totalElements = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            totalElements = totalElements + testArray[i][j];
        }
    }
    return totalElements;
}

//Finding the average of the 2D Array
double getAverage(int testArray[][5], int rows, int columns)
{
    double arraySize = rows * columns;
    double totalElements = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            totalElements = totalElements + testArray[i][j];
        }
    }
    return totalElements/arraySize;
}

//Finding the total of a single row
int getRowTotal(int testArray[][5], int rows, int columns)
{
    int rowTotal = 0;
    for (int i = 0; i < columns; i++)
    {
        rowTotal = rowTotal + testArray[rows][i];
    }
    return rowTotal;
}

//Finding the Column total
int getColumnTotal(int testArray[][5], int rows, int columns)
{
    int columnTotal = 0;
    for (int i = 0; i < rows; i++)
    {
        columnTotal = columnTotal + testArray[i][columns];
    }
    return columnTotal;
}

//Finding the highest in the row
int getHighestInRow(int testArray[][5], int rows, int columns)
{
    int highest = 0;
    for (int i = 0; i < columns; i++)
    {
        if (testArray[rows][i] > highest)
        {
            highest = testArray[rows][i];
        }
    }
    return highest;
}

//Finding the lowest in the row
int getLowestInRow(int testArray[][5], int rows, int columns)
{
    int lowest = testArray[rows][0];
    for (int i = 0; i < columns; i++)
    {
        if (testArray[rows][i] < lowest)
        {
            lowest = testArray[rows][i];
        }
    }
    return lowest;
}



