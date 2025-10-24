#include "Employee.h"
using namespace std;

Employee::Employee() : Person(), position(""), salary(0.0) {}

Employee::Employee(const string& n, const string& s, int a, const string& pos, double sal)
    : Person(n, s, a), position(pos), salary(sal) {}

Employee::~Employee() {}

ostream& operator<<(ostream& os, const Employee& e) {
    os << static_cast<const Person&>(e);
    os << e.position << "\n" << e.salary << "\n";
    return os;
}

istream& operator>>(istream& is, Employee& e) {
    is >> static_cast<Person&>(e);
    
    if (&is == &cin) cout << "Введіть посаду: ";
    is >> e.position;

    if (&is == &cin) cout << "Введіть зарплату: ";
    is >> e.salary;
    
    return is;
}