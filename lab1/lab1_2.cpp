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
        double b_beside = exp(-(x+z)/z+1);
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
    float x, y, z, b, x_start = -1, x_end = 1, step = 0.2;
    x = x_start;
    y = 4.7;
    z = -13;
    while(x<=x_end){
        ZavdClass Zavd;
        Zavd.Fn_b(x, y, z);
        Zavd.Fn_a(x, y, z, Zavd.getb());
        cout << "\nx = " << x << "; ";
        cout << "a = " << Zavd.geta() << "; " << "b = " << Zavd.getb() << endl;
        x += step;
    }
    return 0;
}