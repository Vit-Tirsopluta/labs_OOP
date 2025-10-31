#pragma once

class Body {
public:
    virtual double getSurfaceArea() const = 0;
    virtual double getVolume() const = 0;

    virtual ~Body() {}
};