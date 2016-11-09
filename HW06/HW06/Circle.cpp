//
//  Circle.cpp
//  HW06
//
//  Created by Steven Mumford on 11/3/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "Circle.hpp"

// Initializes the variable numberOfObjects
int Circle::numberOfObjects =0;

// No-arg onstructor
Circle::Circle()
{
    radius = 1;
    numberOfObjects++;
}

// Constructor
Circle::Circle(double newRadius)
{
    radius = newRadius;
    numberOfObjects++;
}

// Getter for the area of the circle
double Circle::getArea() const
{
    return radius * radius * 3.14159;
}

// Getter for the radius of the circle
double Circle::getRadius() const
{
    return radius;
}

// Setter function for the radius of the circle
void Circle::setRadius(double newRadius)
{
    radius = (newRadius >= 0) ? newRadius : 0;
}

// Getter function for the number of objects
int Circle::getNumberOfObjects()
{
    return numberOfObjects;
}

// Overloaded operator less than
bool Circle::operator<(Circle& c)
{
    if(getRadius() < c.getRadius())
        return true;
    else
        return false;
}

// Overloaded operator less than or equal to
bool Circle::operator<=(Circle& c)
{
    if(getRadius() <= c.getRadius())
        return true;
    else
        return false;
}

// Overloaded operator equal to
bool Circle::operator==(Circle& c)
{
    if(getRadius() == c.getRadius())
        return true;
    else
        return false;
}

// Overloaded operator not equal to
bool Circle::operator!=(Circle& c)
{
    if(getRadius() != c.getRadius())
        return true;
    else
        return false;
}

// Overloaded operator greater than
bool Circle::operator>(Circle& c)
{
    if(getRadius() > c.getRadius())
        return true;
    else
        return false;
}

// Overloaded operator greater than or equal to
bool Circle::operator>=(Circle& c)
{
    if(getRadius() >= c.getRadius())
        return true;
    else
        return false;
}
