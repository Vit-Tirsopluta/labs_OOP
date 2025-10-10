#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Circle{
    double R;
public:
    Circle();
    Circle(double r);
    void setRadius(double r);
    double getArea(double increaseCoef) const;
    double getRadius() const;
    double getArea() const;
    double getLength() const;
    
    friend istream& operator>>(istream& in, Circle& c);
    friend ostream& operator<<(ostream& out, const Circle& c);
};