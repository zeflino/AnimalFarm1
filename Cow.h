#ifndef COW_H
#define COW_H

#include "Animal.h"

using namespace std;

class Cow : public Animal {
private: 
    void gainWeight();
public:
    Cow() : Animal() {}
    Cow(string n, double h , double w) : Animal(n, w, h) {}
    void eat();
};
void Cow::gainWeight() {
    weight += 50;
    cout << getName() << " gained 50 pounds.\n";
    cout << getName() << " now weighs " << getWeight() << "\n\n";
}
void Cow::eat() {
    cout << getName() << " the cow is eating." << endl;
    gainWeight();
    getWeight();
}
#endif