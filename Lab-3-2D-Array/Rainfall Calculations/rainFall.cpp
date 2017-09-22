//
//  rainFall.cpp
//  Rainfall Calculations
//
//  Created by Aingty Eung on 9/7/16.
//  Copyright © 2016 Aingty Eung. All rights reserved.
//

#include "rainFall.hpp"
#include <iostream>
#include "math.h"
#include <iomanip>
#include <stdio.h>
#include<fstream>
using namespace std;

//Constructor For the class RainFall()
RainFall::RainFall()
{
    //Open the file
    ifstream inputFile;
    inputFile.open("rainfall.txt");
    
    //Read the monthly rainfall in the file
    if (inputFile.is_open())
    {
        for(month = 0; month <= sizeOfArray; month++)
        {
            inputFile >> rainFallArray[month];
        }
        
    }
    else{
        cout<<"error opening file"<<endl;
    }
    
    //Close the file after it is used
    inputFile.close();
}

////Getting the element of an array.
//int RainFall::getArrayElement(int i)
//{
//    return rainFallArray[i];
//}


//Used to calculate the average of all the rainfall in the months.
int RainFall::calculateAverageRainFall(int rainFallArray[])
{
    int averageRainfall = 0; // Variable used to get the average of the rainfall
    for (int i = 0; i <= sizeOfArray; i++)
    {
        averageRainfall = averageRainfall + rainFallArray[i];
    }
    double averageRainfall1 = (double)averageRainfall / 12;
    averageRainfall = (int) ceil(averageRainfall1);
    return averageRainfall;
}

//Function used to Output the Classification Tables as well as average, lowest, and highest rainfall month.
void RainFall::classifyAndDisplayRainfall(int rainFallArray[])
{
    //Initializing the lowest and highest rainfall month to be the first rainfall data.
    int lowestMonth = rainFallArray[0];
    int highestMonth = rainFallArray[0];
    
    //These are used to trigger the switch to printing the month's name.
    int monthOfLowest = 0;
    int monthOfHighest = 0;
    
    //Call the calculateAverageRainFall function to get the average rainfall
    int averageRainfall = calculateAverageRainFall(rainFallArray);
    
    for (int i = 1; i <= sizeOfArray; i++)
    {
        if (lowestMonth > rainFallArray[i])
        {
            lowestMonth = rainFallArray[i];
            monthOfLowest = i;
        }
        
        if (highestMonth < rainFallArray[i])
        {
            highestMonth = rainFallArray[i];
            monthOfHighest = i;
        }
    }
    //Printing out the Average, highest, and lowest rainfall
    cout << "The year's average monthly rainfall was " << averageRainfall << " mm."<<endl;
    cout << getMonthName(monthOfHighest) << " has the highest rainfall ("<< rainFallArray[monthOfHighest] <<" mm)."<<endl;
    cout << getMonthName(monthOfLowest) << " has the lowest rainfall (" << rainFallArray[monthOfLowest] << " mm).\n"<<endl;
    
    
    //Printing the header of the output
    cout << "Month \t Rainfall(mm) \t Classification"<<endl;
    cout << "------ \t ----------- \t --------------"<<endl;
    
    //Printing the Month, rainfall (mm), and classification
    int j = 1;//used to display the number under month's header
    int rainyAverage = averageRainfall*.2 + averageRainfall;
    int dryAverage = averageRainfall - averageRainfall*.25;
    for (int i = 0; i <= sizeOfArray; i++)
    {
        if (rainFallArray[i] > rainyAverage)
        {
            cout << right << setw(2) << j << right << setw(15) << rainFallArray[i] << right << setw(15) << "Rainy"<<endl;
            j++;
        }
        else if(rainFallArray[i] < dryAverage)
        {
            cout << right << setw(2) << j << right << setw(15) << rainFallArray[i] << right << setw(15) <<"Dry"<<endl;
            j++;
            
        }
        else
        {
            cout << right << setw(2) << j << right << setw(15) << rainFallArray[i] << right << setw(15) <<"Average"<<endl;
            j++;
            
        }
    }
}


//Method used to set the name of the Month in order to print.
string RainFall::getMonthName(int monthNumber)
{
    string name;
    
    switch (monthNumber) {
        case 0:
            name = "January";
            break;
        case 1:
            name = "Feburary";
            break;
        case 2:
            name = "March";
            break;
        case 3:
            name = "April";
            break;
        case 4:
            name = "May";
            break;
        case 5:
            name = "June";
            break;
        case 6:
            name = "July";
            break;
        case 7:
            name = "August";
            break;
        case 8:
            name = "September";
            break;
        case 9:
            name = "October";
            break;
        case 10:
            name = "November";
            break;
        case 11:
            name = "December";
            break;
            
        default:
            name = "January";
            break;
    }
    return name;
}
