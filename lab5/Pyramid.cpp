#include "Pyramid.h"
#include <cmath>

Pyramid::Pyramid(double b, double h) {
    baseSide = (b > 0) ? b : 1.0;
    height = (h > 0) ? h : 1.0;
}

double Pyramid::getSurfaceArea() const {
    double slantHeight = sqrt(pow(height, 2) + pow(baseSide / 2, 2));
    
    double baseArea = pow(baseSide, 2);
    
    double lateralArea = 2 * baseSide * slantHeight;
    
    return baseArea + lateralArea;
}

double Pyramid::getVolume() const {
    return (1.0 / 3.0) * pow(baseSide, 2) * height;
}