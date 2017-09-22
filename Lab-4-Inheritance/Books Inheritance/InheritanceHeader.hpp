/*
    Aingty Eung
    CECS 282 Lab 4 Program 1 (Header File)
    Due Date: 9/20/16
*/

#ifndef InheritanceHeader_hpp
#define InheritanceHeader_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class Publication
{
private:
    string title;
    double price;
    
public:
    //Function used to get the title and price of the book from the user
    void getData();
    //Function used to display the title and price of the book for the user
    void putData();
};

class Sales
{
private:
    float salesRecord[3];
    
public:
    //Function used to get the size of the array
    int getArraySize();
    //Function used to get the sales record of the book from the user
    void getData();
    //Function used to display the sales record of the book for the user
    void putData();
};

class Book: private Publication, private Sales
{
private:
    int pageCount;
    
public:
    //Function used to get the page count, title, price, and sales record of the book from the user
    void getData(); //Override Publication and Sales
    //Function used to display the page count, title, price and sales record for the user
    void putData(); //Override Publication and Sales
};

class eBook: private Publication, private Sales
{
private:
    double MB;
    
public:
    //Function used to get the eBook MB size, title, price, and sales record of the book from the user
    void getData();
    //Function used to display the eBook MB size, title, price and sales record for the user
    void putData();
};
#endif /* InheritanceHeader_hpp */
