#ifndef HORSE_H
#define HORSE_H

#include "Animal.h"

using namespace std;

class Horse : public Animal { //makes "horse" a subclass of Animal
private: 
    void gainWeight();
public:
    Horse() : Animal() {}
    Horse(string n, double h , double w) : Animal(n, w, h) {}
    void eat();
};

void Horse::gainWeight() {
    weight += 20;
    cout << getName() << " gained 20 pounds.\n";
    cout << getName() << " now weighs " << getWeight() << "\n\n";
}
void Horse::eat() {
    cout << getName() << " the horse is eating." << endl;
    gainWeight();
    getWeight();
}


#endif