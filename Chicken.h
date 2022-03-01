#ifndef CHICKEN_H
#define CHICKEN_H

#include "Animal.h"

using namespace std;

class Chicken : public Animal {
private: 
    void gainWeight();
public:
    Chicken() : Animal() {}
    Chicken(string n, double h , double w) : Animal(n, w, h) {}
    void eat();
};

using namespace std;

void Chicken::gainWeight() {
    weight += .25;
    cout << getName() << " gained .25 pounds.\n";
    cout << getName() << " now weighs " << getWeight() << "\n\n";
}
void Chicken::eat() {
    cout << getName() << " the chicken is eating." << endl;
    gainWeight();
    getWeight();
}
#endif