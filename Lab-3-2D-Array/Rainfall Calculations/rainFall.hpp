//
//  rainFall.hpp
//  Rainfall Calculations
//
//  Created by Aingty Eung on 9/7/16.
//  Copyright © 2016 Aingty Eung. All rights reserved.
//

#ifndef rainFall_hpp
#define rainFall_hpp

#include <stdio.h>
#include <string>

class RainFall
{
private:
    int month = 0;
    int sizeOfArray = 11;
    int rainFallArray[];
    
public:
    RainFall();
    int getArrayElement(int i){return rainFallArray[i];}
    int getArraySize(){return sizeOfArray;}
    void classifyAndDisplayRainfall(int rainFallArray[]);
    int calculateAverageRainFall(int rainFallArray[]);
    std::string getMonthName(int monthNumber);

    
    
    
};


#endif /* rainFall_hpp */
