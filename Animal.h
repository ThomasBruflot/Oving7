#pragma once
#include "std_lib_facilities.h"

class Animal {
protected: 
    string name;
    int age;
public:
    Animal(string n, int a);
    virtual string toString() = 0;
};

class Dog : public Animal {
public:
    Dog(string n, int a);
    string toString() {return "Dog: " + name+ ", "+ to_string(age);}
};

class Cat : public Animal {
public:
    Cat(string n, int a);
    string toString() {return "Cat: " + name+ ", "+ to_string(age);}
};