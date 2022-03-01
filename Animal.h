#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal {
protected: 
    /*allows for the items under "protected" to be private to user
    but accessable to the subclasses*/

    double height, weight;
    string name;
private:
    void gainWeight(); 
public:
    Animal();
    Animal(string n, double h, double w);

    //getters
    string getName() const;
    double getWeight() const;
    double getHeight() const;

    //setters
    void setName(string n);
    void setHeight(double);
    void setWeight(double);
    
    /*virtual function which will be used so that the 
    subclasses can have their own alteration of the 
    basic eat*/
    virtual void eat();
}; 


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
void Animal::eat() {
    gainWeight();  //how does this work with virtual?
}
void Animal::gainWeight() {
    weight += 20;
}
#endif