//
//  Circle.hpp
//  HW06
//
//  Created by Steven Mumford on 11/3/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

class Circle
{
private:
    double radius;
    static int numberOfObjects;
    
public:
    Circle();
    Circle(double);
    double getArea() const;
    double getRadius() const;
    void setRadius(double);
    static int getNumberOfObjects();
    bool operator<(Circle&);
    
};

#endif /* Circle_hpp */
