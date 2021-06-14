#include "Animal.h"

Animal::Animal(string n, int a) : name{n}, age{a}{}

Dog::Dog(string n, int a) : Animal{n, a} {}

Cat::Cat(string n, int a) : Animal{n, a} {}