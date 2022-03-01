#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    double height, weight;
    string name;
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

    void eat();

}; 
#endif