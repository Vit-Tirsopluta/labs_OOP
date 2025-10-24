#include "circle.h"
#include <exception>


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
