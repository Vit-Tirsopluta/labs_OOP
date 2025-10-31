#include "Sphere.h"
#include <cmath>

Sphere::Sphere(double r) {
    radius = (r > 0) ? r : 1.0;
}

double Sphere::getSurfaceArea() const {
    return 4 * M_PI * pow(radius, 2);
}

double Sphere::getVolume() const {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}