#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

class Employee : public Person {
private:
    std::string position;
    double salary;

public:
    Employee();
    Employee(const std::string& n, const std::string& s, int a, const std::string& pos, double sal);
    ~Employee();

    friend std::ostream& operator<<(std::ostream& os, const Employee& e);
    friend std::istream& operator>>(std::istream& is, Employee& e);
};

#endif