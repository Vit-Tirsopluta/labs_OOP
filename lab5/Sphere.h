#pragma once
#include "Body.h"

class Sphere : public Body {
private:
    double radius;

public:
    Sphere(double r);

    virtual double getSurfaceArea() const;
    virtual double getVolume() const;
};