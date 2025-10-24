#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    std::string surname;
    int age;

public:
    Person();
    Person(const std::string& n, const std::string& s, int a);
    virtual ~Person();

    friend std::ostream& operator<<(std::ostream& os, const Person& p);
    friend std::istream& operator>>(std::istream& is, Person& p);
};

#endif