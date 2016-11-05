//
//  Circle.cpp
//  HW06
//
//  Created by Steven Mumford on 11/3/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "Circle.hpp"

int Circle::numberOfObjects =0;

Circle::Circle()
{
    radius = 1;
    numberOfObjects++;
}
Circle::Circle(double newRadius)
{
    radius = newRadius;
    numberOfObjects++;
}
double Circle::getArea() const
{
    return radius * radius * 3.14159;
}
double Circle::getRadius() const
{
    return radius;
}
void Circle::setRadius(double newRadius)
{
    radius = (newRadius >= 0) ? newRadius : 0;
}
int Circle::getNumberOfObjects()
{
    return numberOfObjects;
}
bool Circle::operator<(Circle& c)
{
    if(getRadius() < c.getRadius())
        return true;
    else
        return false;
}
bool Circle::operator<=(Circle& c)
{
    if(getRadius() <= c.getRadius())
        return true;
    else
        return false;
}
bool Circle::operator==(Circle& c)
{
    if(getRadius() == c.getRadius())
        return true;
    else
        return false;
}
bool Circle::operator!=(Circle& c)
{
    if(getRadius() != c.getRadius())
        return true;
    else
        return false;
}
bool Circle::operator>(Circle& c)
{
    if(getRadius() > c.getRadius())
        return true;
    else
        return false;
}
bool Circle::operator>=(Circle& c)
{
    if(getRadius() >= c.getRadius())
        return true;
    else
        return false;
}
