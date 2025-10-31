#pragma once
#include "Body.h"

class Pyramid : public Body {
private:
    double baseSide;
    double height;

public:
    Pyramid(double b, double h);

    virtual double getSurfaceArea() const;
    virtual double getVolume() const;
};