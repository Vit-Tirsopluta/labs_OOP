#include "Person.h"
using namespace std;

Person::Person() : name(""), surname(""), age(0) {}

Person::Person(const string& n, const string& s, int a)
    : name(n), surname(s), age(a) {}

Person::~Person() {}

ostream& operator<<(ostream& os, const Person& p) {
    os << p.name << "\n" << p.surname << "\n" << p.age << "\n";
    return os;
}

istream& operator>>(istream& is, Person& p) {
    if (&is == &cin) cout << "Введіть ім'я: ";
    is >> p.name;
    
    if (&is == &cin) cout << "Введіть прізвище: ";
    is >> p.surname;

    if (&is == &cin) cout << "Введіть вік: ";
    is >> p.age;
    
    return is;
}