//
//  Complex.hpp
//  HW06
//
//  Created by Steven Mumford on 11/5/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#ifndef Complex_hpp
#define Complex_hpp

class Complex
{
private:
    double a;
    double b;
    
public:
    Complex();
    Complex(double);
    Complex(double, double);
    
    double getA();
    double getB();
    
    Complex add(Complex&, Complex&);
    Complex subtract(Complex&, Complex&);
    Complex multiply(Complex&, Complex&);
    Complex divide(Complex&, Complex&);
    double abs(Complex&, Complex&);
};

#endif /* Complex_hpp */
