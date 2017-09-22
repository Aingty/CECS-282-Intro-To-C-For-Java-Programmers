/*
 Aingty Eung
 013462772
 CECS 282 Lab 2 Perfect Numbers Program 1
 9/06/16
 */

#include <iostream>
using namespace std;
int main()
{
    
    int sum = 0; // Used to check if the sum will determine the perfect number.
    int counter = 0; // Used to be a counter.
    int stop = 4; //Used to stop after 4.
    bool keepGoing = true; // Used to keep the loop continuing so that it will end when ever the counter done
    int testingNumber = 1; // The starting number to test.
    
    // While loop used to find the perfect number. It will keep going until 4 numbers are found.
    while (keepGoing)
    {
        sum = 0; //Resetting the sum so that the next perfect number can be found
        //Loop to get the sum so that a perfect number could be found
        for(int j = 1; j <= testingNumber/2; j++)
        {
            if(testingNumber%j == 0)
            {
                sum = sum + j;
            }
            
        }
        //If the sum turns out to be the testing number, then it is a perfect number
        if(sum == testingNumber)
        {
            counter++;
            cout << "Perfect number " << counter <<" is "<< sum << endl;
            if(counter >= stop)
            {
                keepGoing = false;
            }
        }
        testingNumber++; //Incrementing the testingNumber so that the next number could be tested.
    }
    return 0;
}