/*
    Aingty Eung
    013462772
    CECS 282 Lab 1 Payroll Check Calculation
    8/30/16
 */

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;


//Declaring all constant variables
int PERCENTAGE = 100;
double FEDERAL_INCOME_TAX = 20;
double STATE_TAX = 4;
double SOCIAL_SECURITY_TAX = 3.5;
double MEDICARE_MEDICAID_TAX = 2.75;
double PENSION_PLAN = 6;
double HEALTH_INSURANCE = 80.00;
int main()
{
    //Declaring Variables
    double gross = 0.00;
    double netPay = 0.00;
    cout << "Please input the Gross Amount earned: \n";
    cin >> gross;
    
    //Calculating gross amount, federate tax, sale tax, social security tax, medicare/medicaid tax, pension plan, health insurance, and net pay.
    FEDERAL_INCOME_TAX = (FEDERAL_INCOME_TAX / PERCENTAGE) * gross;
    STATE_TAX = (STATE_TAX / PERCENTAGE) * gross;
    SOCIAL_SECURITY_TAX = (SOCIAL_SECURITY_TAX / PERCENTAGE) * gross;
    MEDICARE_MEDICAID_TAX = (MEDICARE_MEDICAID_TAX / PERCENTAGE) * gross;
    PENSION_PLAN = (PENSION_PLAN / PERCENTAGE) * gross;
    netPay = gross - (FEDERAL_INCOME_TAX + STATE_TAX + SOCIAL_SECURITY_TAX + MEDICARE_MEDICAID_TAX + PENSION_PLAN + HEALTH_INSURANCE);
    
    //Displaying output
    cout << setprecision(2) << fixed;
    cout << left << setw(26) << "Gross Amount:" << right << " $" << setw(10) << gross << endl;
    cout << left << setw(26) << "Federal Income Tax:" << right << " $" << setw(10) << FEDERAL_INCOME_TAX << endl;
    cout << left << setw(26) << "State Tax:" << right << " $" << setw(10) << STATE_TAX << endl;
    cout << left << setw(26) << "Social Security Tax:" << right << " $" << setw(10) << SOCIAL_SECURITY_TAX << endl;
    cout << left << setw(26) << "Medicare/Medicaid Tax:" << right << " $" << setw(10) << MEDICARE_MEDICAID_TAX << endl;
    cout << left << setw(26) << "Pension Plan Cost:" << right << " $" << setw(10) << PENSION_PLAN << endl;
    cout << left << setw(26) << "Health Insurance:" << right << " $" << setw(10) << HEALTH_INSURANCE << endl;
    cout << left << setw(26) << "Net Pay:" << right << " $" << setw(10) << netPay << endl;
    return 0;
}