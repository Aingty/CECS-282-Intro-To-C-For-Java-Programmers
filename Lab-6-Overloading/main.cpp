/*
    Aingty Eung
    CECS 282 Lab 6 Overloading Functions
 */
#include <iostream>
#include "Overloading.hpp"

int main() {
    Fracpri F3 = Fracpri(1,1,2);
    Fracpri F1;
    Fracpri F2;
    F1.getFraction();
    cin >> F2;
    cout << "F1: ";
    F1.showFraction();
    cout << "F2: "<< F2 <<endl;
    F3 = F1 + F2;
    cout << F1 << " + " << F2 << " = "<<F3 <<endl;
    F3 = F1 - F2;
    cout << F1 << " - " << F2 << " = "<<F3 <<endl;
    F3 = F1 * F2;
    cout << F1 << " * " << F2 << " = "<<F3 <<endl;
    F3 = F1 / F2;
    cout << F1 << " / " << F2 << " = "<<F3 <<endl;
    F3 = F1 + 10;
    cout << F1 << " + " << "10" << " = "<<F3 <<endl;
    F3 = 15 + F2;
    cout << "15" << " + " << F2 << " = "<<F3 <<endl;
    if (F1 < F2)
    {
        cout << "F1 is less than F2" <<endl;
    }
    else
    {
        cout << "No, F1 is greater than or equal to F2" << endl;
    }
    F3+=10;
    cout << "F3+=10 = "<< F3 <<endl;
    cout << "What float number would you like to convert to Mixed Fraction?" << endl;
    float num;
    cin >> num;
    cin.ignore();
    F3 = num;
    num = F3;
    cout << num <<" --> "<< F3 << endl;
    return 0;
}
