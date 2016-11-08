//
//  Complex.cpp
//  HW06
//
//  Created by Steven Mumford on 11/5/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "Complex.hpp"
#include <cmath>

Complex::Complex()
{
    a = 0;
    b = 0;
}
Complex::Complex(double A)
{
    a = A;
}
Complex::Complex(double A, double B)
{
    a = A;
    b = B;
}
double Complex::getA()
{
    return a;
}
double Complex::getB()
{
    return b;
}
Complex Complex::add(Complex& c)
{
    double newA = getA() + c.getA();
    double newB = getB() + c.getB();
    Complex cSum(newA, newB);
    return cSum;
}
Complex Complex::subtract(Complex& c)
{
    double newA = getA() - c.getB();
    double newB = getB() - c.getB();
    Complex cSub(newA, newB);
    return cSub;
}
Complex Complex::multiply(Complex& c)
{
    double newA = (getA() * c.getA()) - (getB() * c.getB());
    double newB = (getB() * c.getA()) + (getA() * c.getB());
    Complex cSub(newA, newB);
    return cSub;
}
Complex Complex::divide(Complex& c)
{
    double newA = ((getA() * c.getA()) + (getB() * c.getB())) / ((c.getA() * c.getA()) + (c.getB() * c.getB()));
    double newB = (getB() * c.getA()) - (getA() * c.getB()) / ((c.getA() * c.getA()) + (c.getB() * c.getB()));
    Complex cDiv(newA, newB);
    return cDiv;
}
double Complex::abs()
{
    double ABS = pow(pow( getA(), 2) + pow(getB() , 2), 1/2);
    return ABS;
}
string toString(Complex& c)
{
    string newC = " + i";
    string newA = to_string(c.getA());
    string newB = to_string(c.getB());
    newC.insert(0, newA);
    newC.insert(newC.size()-1, newB);
    
    return newC;
}
Complex& Complex::operator+=(Complex& c)
{
    *this=add(c);
    return *this;
}
Complex& Complex::operator-=(Complex& c)
{
    *this = subtract(c);
    return *this;
}
Complex& Complex::operator*=(Complex& c)
{
    *this = multiply(c);
    return *this;
}
Complex& Complex::operator/=(Complex& c)
{
    *this = divide(c);
    return *this;
}
int Complex::operator[](int index)
{
    if(index == 0)
        return getA();
    if(index == 1)
        return getB();
    else
        return -1;
}
Complex Complex::operator+()
{
    return *this;
}
Complex Complex::operator-()
{
    return Complex(-getA(), -getB());
}
Complex& Complex::operator++()
{
    int newA = getA() + 1;
    int newB = getB() + 1;
    Complex c(newA, newB);
    return c;
}
/*
Complex& Complex::operator--()
{
    
}
Complex Complex::operator++(int temp)
{
    
}
Complex Complex::operator--(int temp)
{
    
}
ostream& operator<<(ostream& out, const Complex& c)
{
    string newA = to_string(c.getA());
    
}
istream& operator>>(ostream& in, const Complex& c);
{
    
}
*/
