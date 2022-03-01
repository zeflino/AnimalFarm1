#ifndef BARN_H
#define BARN_H

#include "Animal.h"
#include "Chicken.h"
#include "Cow.h"
#include "Horse.h"
#include <vector>

using namespace std;

class Barn {
private: 
    vector<Chicken> coop;
    vector<Horse> stalls;
    vector<Cow> pen;
public: 
    Barn();
    void feedChickens();
    void feedCows(); 
    void feedHorses();
};

Barn::Barn() {
    //through this function I am adding the animals which will be added to their respective list
    coop.push_back(Chicken("bob", 120, 214));
    stalls.push_back(Horse("asdf", 234, 23423));
    pen.push_back(Cow("agdfg", 435645, 2342));
}
void Barn::feedChickens() {
    cout << "Feeding the chickens" << endl;
    //using a for loop to go through the vector of chickens in the "coop"
    for (int index = 0; index < coop.size(); index++ ) {
        coop[index].eat();
    }
}
void Barn::feedCows() {
    cout << "Feeding the cows" << endl;
    for (int index = 0; index < pen.size(); index++ ) {
        pen[index].eat();
    }
}
void Barn::feedHorses() {
    cout << "Feeding the horses" << endl;
    for (int index = 0; index < stalls.size(); index++ ) {
        stalls[index].eat();
    }
}

#endif