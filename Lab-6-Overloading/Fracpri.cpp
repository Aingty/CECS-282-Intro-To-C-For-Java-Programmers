/*
 Aingty Eung
 CECS 282 Lab 6 Overloading Functions
*/
#include "Overloading.hpp"

//Default Constructor
Fracpri::Fracpri()
{
    whole = 0;
    numer = 0;
    denom = 0;
}
//3-arguments Constructor
Fracpri::Fracpri(int w, int n, int d)
{
    whole = w;
    numer = n;
    denom = d;
}
//Converter Constructor
Fracpri::Fracpri(float f)
{
    stringstream ss (stringstream::in | stringstream::out);
    whole = (int) f;
    ss << f;
    string test = ss.str();
    double counter = test.size() - 2;
    if (test.size() > 1)
    {
        test = test.substr(2);
        numer = atoi(test.c_str());
        denom = pow(10, counter);
    }
    else
    {
        numer = 0;
        denom = 0;
    }
}
//Geting fraction input whole-numerator-denominator
void Fracpri::getFraction()
{
    cout << "Input the Mixed Fraction in 'Whole numer denom' format"<<endl;
    cin >> whole;
    cin.ignore();
    cin >> numer;
    cin.ignore();
    cin >> denom;
}
//Displaying the Fraction
void Fracpri::showFraction()
{
    if (numer <= 0 || denom <=0)
    {
        cout << whole <<endl;
    }
    else
    {
        int a = denom;
        int b = numer;
        int r;
        while (b != 0)
        {
            r = a % b;
            a = b;
            b = r;
        }
        denom = denom / a;
        numer = numer /a;
        if (numer > 0)
        {
            cout << whole << " " << numer << "/" << denom <<endl;
        }
        else
        {
            cout << whole << endl;
        }
    }
}
//Adding fraction method
Fracpri Fracpri::addFracts(Fracpri a, Fracpri b)
{
    Fracpri c;
    if ((a.denom==0 && a.numer!=0) || (b.denom==0 && b.numer!=0) || (a.denom==0 && a.numer==0) || (b.denom==0 && b.numer==0))
    {
        c.whole = a.whole + b.whole;
    }
    else
    {
        float temp, temp1;
        temp = a.whole * a.denom + a.numer;
        temp = temp * b.denom;
        temp1 = b.whole * b.denom + b.numer;
        temp1 = temp1 * a.denom;
        temp = temp + temp1;
        c.whole = (int) temp/(a.denom * b.denom);
        c.numer = (int) temp % (a.denom * b.denom);
        c.denom = (int) a.denom * b.denom;
    }
    return c;
}
//Overloading F1 + int
Fracpri operator+(Fracpri o, int i)
{
    o.whole = o.whole + i;
    return o;
}
//Overloading int + F1
Fracpri operator+(int i, Fracpri o)
{
    o.whole = o.whole + i;
    return o;
}
//Overloading F1 + F2
Fracpri Fracpri::operator+(Fracpri o)
{
    Fracpri left(whole, numer, denom);
    Fracpri right(o.whole, o.numer, o.denom);
    return Fracpri::addFracts(left, right);
}
//Overloading F1 - F2
Fracpri Fracpri::operator-(Fracpri o)
{
    Fracpri c;
    if ((denom==0 && numer!=0) || (o.denom==0 && o.numer!=0) || (denom==0 && numer==0) || (o.denom==0 && o.numer==0))
    {
        c.whole = whole - o.whole;
    }
    else
    {
        float temp, temp1;
        temp = whole * denom + numer;
        temp = temp * o.denom;
        temp1 = o.whole * o.denom + o.numer;
        temp1 = temp1 * denom;
        temp = temp - temp1;
        if (temp > 0)
        {
            c.whole = (int) temp/(denom * o.denom);
            c.numer = (int) temp % (denom * o.denom);
            c.denom = (int) denom * o.denom;
            
        }
        else if (temp < 0)
        {
            c.whole = (int) temp/(denom * o.denom);
            c.numer = (int) temp % (denom*o.denom)*-1;
            c.denom = (int) denom * o.denom;
        }
        else
        {
            c.whole = 0;
            c.numer = temp;
            c.denom = denom * o.denom;
        }
    }
        return c;
}
//Overloading F1 * F2
Fracpri Fracpri::operator*(Fracpri o)
{
    float temp, temp1;
    Fracpri c;
    temp = whole * denom + numer;
    temp1 = o.whole * o.denom + o.numer;
    temp = temp * temp1;
    c.whole = (int) temp/(denom * o.denom);
    c.numer = (int) temp % (denom * o.denom);
    c.denom = (int) denom * o.denom;
    return c;
}
//Overloading F1 / F2
Fracpri Fracpri::operator/(Fracpri o)
{
    float temp, temp1;
    Fracpri c;
    temp = whole * denom + numer;
    temp1 = o.whole * o.denom + o.numer;
    temp = temp * o.denom;
    c.whole = (int) temp/(denom * temp1);
    c.numer = (int) temp % (denom * (int)temp1);
    c.denom = (int) denom * temp1;
    return c;
}
//Overloading F1 < F2
bool Fracpri::operator < (Fracpri o)
{
    Fracpri F1 = Fracpri(whole, numer, denom);
    Fracpri F2 = Fracpri(o.whole, o.numer, o.denom);
    F1 = F1/F2;
    if (F1.whole >= 1 && F1.numer == 0)
    {
        return false;
    }
    else if (F1.whole < 1 && F1.numer != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//Overloading F1 += int
void Fracpri::operator += (int i)
{
    this->whole = this -> whole + i;
}
//Conversion Function for num = F1;
Fracpri::operator float()
{
    float a = denom;
    float b = whole * denom + numer;
    return b/a;
}
//Overloading cin >> F1
istream &operator >> (istream &in, Fracpri &o)
{
    cout << "Input the Mixed Fraction in 'Whole numer denom' format"<<endl;
    in >> o.whole;
    in.ignore();
    in >> o.numer;
    in.ignore();
    in >> o.denom;
    return in;
}
//Overloading cout << F1
ostream &operator << (ostream &out, Fracpri &o)
{
    if (o.numer == 0)
    {
        out << o.whole;
    }
    else if ( o.denom == 0)
    {
        out << "Undefined Answer"<<endl;
    }
    else if (o.numer < 0)
    {
        int a = o.denom;
        int b = o.numer;
        int r;
        while (b != 0)
        {
            r = a % b;
            a = b;
            b = r;
        }
        o.denom = o.denom / a;
        o.numer = o.numer /a;
        if (o.numer/o.denom == 1 || o.numer/o.denom==-1)
        {
            o.whole = o.whole + (o.numer/o.denom);
            out << o.whole;
        }
        else if (o.numer > 0 && o.denom > 0)
        {
            out << o.whole << " " << o.numer << "/" << o.denom;
        }
        else if (o.numer/o.denom < 0)
        {
            if (o.numer < 0)
            {
                out << o.whole*-1<<" "<<o.numer*-1<<"/"<<o.denom;
            }
            else if (o.denom < 0)
            {
                out << o.whole*-1<<" "<<o.numer<<"/"<<o.denom*-1;
            }
        }
        else
        {
            out << o.whole;
        }
    }
    else
    {
        int a = o.denom;
        int b = o.numer;
        int r;
        while (b != 0)
        {
            r = a % b;
            a = b;
            b = r;
        }
        o.denom = o.denom / a;
        o.numer = o.numer /a;
        if (o.numer/o.denom == 1 || o.numer/o.denom==-1)
        {
            o.whole = o.whole + (o.numer/o.denom);
            cout << o.whole;
        }
        else if (o.numer > 0)
        {
            out << o.whole << " " << o.numer << "/" << o.denom;
        }
        else
        {
            out << o.whole;
        }
    }
    return out;
}
