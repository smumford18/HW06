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
    // Constructors
    Circle();
    Circle(double);
    
    // Getters
    double getArea() const;
    double getRadius() const;
    static int getNumberOfObjects();
    
    // Setters
    void setRadius(double);
    
    // Overloaded operators
    bool operator<(Circle&);
    bool operator<=(Circle&);
    bool operator==(Circle&);
    bool operator!=(Circle&);
    bool operator>(Circle&);
    bool operator>=(Circle&);
};

#endif /* Circle_hpp */
