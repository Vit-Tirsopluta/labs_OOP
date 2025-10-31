#include <iostream>
#include "Body.h"
#include "Sphere.h"
#include "Pyramid.h"


void printBodyInfo(Body* body) {
    std::cout << "--- Обчислення ---" << std::endl;
    std::cout << "Площа поверхні: " << body->getSurfaceArea() << std::endl;
    std::cout << "Об'єм: " << body->getVolume() << std::endl;
    std::cout << "------------------" << std::endl;
}

int main() {
    setlocale(LC_ALL, "Ukrainian");

    Body* bodies[2];

    bodies[0] = new Sphere(5.0);

    bodies[1] = new Pyramid(4.0, 3.0);

    std::cout << "Інформація про КУЛЮ:" << std::endl;
    printBodyInfo(bodies[0]);

    std::cout << "Інформація про ПІРАМІДУ:" << std::endl;
    printBodyInfo(bodies[1]);

    delete bodies[0];
    delete bodies[1];

    return 0;
}