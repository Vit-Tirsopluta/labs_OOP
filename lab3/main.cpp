#include "circle.h"
#include <exception>


int addInt(int a, int b){
    return a + b;
};

double addDouble(double a, double b){
    return a + b;
};

int add3Int(int a, int b, int c){
    return a + b + c;
};

int add(int a, int b){
    return a + b;
};

int add(double a, double b){
    return a + b;
};

int add(int a, int b, int c){
    return add(a, b) + c;
};

int main(){
    Circle c1;
    try {
    cin >> c1;
    cout << c1 << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}
