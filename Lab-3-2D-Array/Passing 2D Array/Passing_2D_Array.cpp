/*
    Aingty Eung
    013462772
    CECS 282
    Lab Assignment 3 Rainfall Program 2
 */

#include <iostream>
#include "2D_Array_Functions.hpp"

using namespace std;

int main() {
    int rows = 4;
    int columns = 5;
    int testArray[][5] ={{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {16,17,18,19,20}};
    
    cout << "This program will generate an Array from 1 - 20 and display some information about the array.\n"<<endl;
    for (int i = 0; i < rows; i++)
    {
        cout << "|";
        for (int j = 0; j < columns; j++)
        {
            if (j == 4)
            {
                cout << " "<<testArray[i][j]<< " ";
            }
            else
            {
                cout << " "<<testArray[i][j]<< ",";
            }
        }
        cout << " |"<<endl;
    }
    cout <<"\n";
    int test = getTotal(testArray, rows, columns);
    cout << "The total of the array elements is " << test <<endl;
    cout << "The average value of an element is " << getAverage(testArray, rows, columns) << endl;
    cout << "The total of row 0 is " << getRowTotal(testArray, 0, columns) << endl;
    cout << "The total of column 2 is "<< getColumnTotal(testArray, rows, 2) << endl;
    cout << "The highest value in row 2 is "<< getHighestInRow(testArray, 2, columns) << endl;
    cout << "The lowest value in row 2 is "<< getLowestInRow(testArray, 2, columns) << endl;
    
    return 0;
}



