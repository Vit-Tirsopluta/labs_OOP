#include "circle.h"
#include <istream>
#include <ostream>


    Circle::Circle(){
        R = 0;
    }

    Circle::Circle(double r){
        setRadius(r);
    }

    void Circle::setRadius(double r) {
    if (r <= 0)
        throw runtime_error("Radius must be positive.");
    R = r;
    }

    double Circle::getRadius() const {
        return R;
    }

    double Circle::getArea() const {
        return getArea(1);
    }

    double Circle::getLength() const {
        return 2 * M_PI * R;
    }

    double Circle::getArea(double increaseCoef) const {
        return M_PI * pow((R*increaseCoef),2);
    }
    
    istream& operator>>(istream& in, Circle& c) {
    cout << "Enter radius: ";
    double temp;
    if (!(in >> temp)) {
        in.clear();
        in.ignore(numeric_limits<streamsize>::max(), '\n');
        throw runtime_error("Invalid input. Radius must be a number.");
    }
    c.setRadius(temp);
        return in;
    if (c.R <= 0) {
        throw runtime_error("Radius must be positive.");
    }
        return in;
    }
    ostream& operator<<(ostream& out, const Circle& c){
        out << "Circle with radius " << c.getRadius()
        << ":\n Area = " << c.getArea()
        << "\n Length = " << c.getLength()
        << endl;
        return out;
    };