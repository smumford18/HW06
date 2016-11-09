//
//  Complex.hpp
//  HW06
//
//  Created by Steven Mumford on 11/5/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#ifndef Complex_hpp
#define Complex_hpp

#include <string>

using namespace std;

class Complex
{
private:
    double a;
    double b;
    
public:
    // Constructors
    Complex();
    Complex(double);
    Complex(double, double);
    
    // Getters
    double getA() const;
    double getB() const;
    
    // Setters
    void setA(double);
    void setB(double);
    
    // Operation functions
    Complex add(Complex&);
    Complex subtract(Complex&);
    Complex multiply(Complex&);
    Complex divide(Complex&);
    double abs();
    
    // Puts numbers in string in easy to output form
    string toString();
    
    // Overloaded operators
    Complex& operator+=(Complex&);
    Complex& operator-=(Complex&);
    Complex& operator*=(Complex&);
    Complex& operator/=(Complex&);
    int operator[](int);
    Complex operator+();
    Complex operator-();
    Complex& operator++();
    Complex& operator--();
    Complex operator++(int);
    Complex operator--(int);
    friend ostream& operator<<(ostream&, const Complex&);
    friend istream& operator>>(ostream&, const Complex&);
};

Complex operator+(Complex&, Complex&);
Complex operator-(Complex&, Complex&);
Complex operator*(Complex&, Complex&);
Complex operator/(Complex&, Complex&);

#endif /* Complex_hpp */
