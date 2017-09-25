//
//  main.cpp
//  Car Wash Simulation
//
//  Created by Aingty Eung on 12/8/16.
//  Copyright © 2016 Aingty Eung. All rights reserved.
//

#include <iostream>
#include "Header.hpp"
#include <queue>
using namespace std;

int main() {
    // Initializing Random Seeds
    //srand(time(NULL));
    queue<int> arriveTime;
    Average averageTime; //averageTime will be used to get the average wait time
    Washer washingMachine; //This is our washer
    //carWashSecond = time takes to wash a car
    int carWashSecond, currentSecond, totalSecond, testing = 0;
    double probability;
    cout << "Welcome to the simulation!\n\tPlease input the amount of time needed to wash one car in seconds: ";
    cin >> carWashSecond;
    cin.ignore();
    cout << "\tPlease input the probability of customer's arrival: ";
    cin >> probability;
    cin.ignore();
    BooleanSource newCar(probability);
    cout << "\tPlease input the duration of the simulation in seconds: ";
    cin >> totalSecond;
    cin.ignore();
    cout << "Simulation started" << endl;
    for (currentSecond = 1; currentSecond<=totalSecond; currentSecond++)
    {
        if (newCar.query())
        {
            testing++;
            if (washingMachine.isBusy() && !arriveTime.empty() && arriveTime.back()+carWashSecond <= totalSecond)
            {
                // tempQueue is used to hold the time when the current car is done washing
                int tempQueue = arriveTime.back();
                averageTime.nextCar(arriveTime.back()-currentSecond);
                arriveTime.push(tempQueue+carWashSecond);
            }
            else
            {
                if (!washingMachine.isBusy())
                {
                    //Pop the previous queue time to push in the next car's finished wash time.
                    if (arriveTime.empty())
                    {
                        arriveTime.push(currentSecond+carWashSecond);
                        washingMachine = Washer(carWashSecond);
                        averageTime.moreCar();
                    }
                    else
                    {
                        if (currentSecond+carWashSecond > totalSecond)
                        {
                            arriveTime.pop();
                            break;
                        }
                        else
                        {
                            arriveTime.pop();
                        }
                        
                    }
                }
            }
        }
        if (washingMachine.isBusy())
        {
            washingMachine.startWashing();
            washingMachine.oneSecond();
        }
    }
    cout << "Seconds to wash one car:\t"<<carWashSecond<<endl;
    cout << "Probability of Customer arrival during a second:\t"<<probability*100<<"%"<<endl;
    cout << "Total simulation seconds:\t"<<totalSecond<<endl;
    cout << "Customer served:\t"<<averageTime.getCar()<<endl;
    cout << "Average wait (Of All Customer):\t"<<(double)(averageTime.getCar()+averageTime.getTime())/averageTime.getCar()<<"sec ~ "<<((averageTime.getCar()+averageTime.getTime())/averageTime.getCar())/60<<"mins"<<endl;
    return 0;
}
