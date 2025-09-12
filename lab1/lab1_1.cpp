#include <iostream>
#include <cmath>
using namespace std;

class ZavdClass {
    double a, b;
public:
    ZavdClass() : a(1), b(1) {}

    void Fn_b(double x, double y, double z) {
        double b_top = y + atan(pow(abs(pow(x,2)+z),0.1));
        double b_bottom = 2*z+x+pow(sin(pow(y,3)),2); 
        double b_beside = exp(-(x+z)/(z+1));
        b = (b_top/b_bottom) + b_beside;
    }

    void Fn_a(double x, double y, double z, double b) {
        double a_beside = pow((1+y),2);
        double a_top = pow(abs(x+y), 0.3)/pow(b,2)+z;
        double a_bottom = 1+exp(-(x-z))+pow(abs(y),0.43);
        a = a_beside*(a_top/a_bottom);
    }

    double geta() { return a; }
    double getb() { return b; }
};

int main() {
    ZavdClass Zavd;
    double x = 4.8, y = 4.7, z = -13;
    double b = Zavd.getb();

 cout << "x: " << x << endl;
 cout << "y: " << y << endl;
 cout << "z: " << z << endl << endl;

    Zavd.Fn_b(x, y, z);
    Zavd.Fn_a(x, y, z, b);

 cout << "a = " << Zavd.geta() << endl;
 cout << "b = " << Zavd.getb() << endl;

    return 0;
}