#include "Animal.h"
#include <string>
#include <iostream>

using namespace std;

Animal::Animal() {
    //instance variables
    weight = height = 0.0;
    name = "";
}

Animal::Animal(string n, double h, double w) {
    weight = w;
    height = h;
    name = n;
}

//getters
string Animal::getName() const {
    return name;
}
double Animal::getHeight() const {
    return height;
}
double Animal::getWeight() const {
    return weight;
}

//setters
void Animal::setName(string n) {
    this->name = n;
}
void Animal::setHeight(double h) {
    this->height = h;
}
void Animal::setWeight(double w) {
    this->weight = w;
}

//extra?
void Animal::eat() {
    //this is where the eating order will go
}
void Animal::gainWeight() {
    //function in charge of making sure animal gains weight
    //input formula here
}