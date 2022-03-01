//Zeferino Lino
//This is my own work with in help class
//main file

#include <iostream>
#include <vector>

using namespace std;

//Animal.h
class Animal {
private:
    double height, weight;
    string name;
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

    void gainWeight(); 
    void eat();

}; 
//Animal.cpp
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
    gainWeight();  //this seems pointless what goes in here?
}
void Animal::gainWeight() {
    weight += 20;
}


//Horse.h 
class Horse : public Animal { //makes "horse" a subclass of Animal
private: 
    void gainWeight();
public:
    Horse();
    Horse(string n, double h , double w) : Animal() {}
    void eat();
};
//Horse.cpp
void Horse::gainWeight() {
    Animal::gainWeight();
}
void Horse::eat() {
    cout << getName() << " the Horse is eating." << endl;
    cout << getName() << " gained 20 pounds" << endl;
    Horse::gainWeight();
    cout << getName() << " now weighs " << getWeight() << endl;
}


//Chicken.h
class Chicken : public Animal {
private: 
    void gainWeight();
public:
    Chicken();
    Chicken(string n, double h , double w) : Animal() {}
    void eat();
};
//Chicken.cpp
void Chicken::gainWeight() {
    Animal::gainWeight();
}
void Chicken::eat() {
    cout << getName() << " the chicken is eating." << endl;
    cout << getName() << " gained 20 pounds" << endl;
    Chicken::gainWeight();
    cout << getName() << " now weighs " << getWeight() << endl;
}


//Cow.h
class Cow : public Animal {
private: 
    void gainWeight();
public:
    Cow(string n, double h , double w) : Animal() {}
    void eat();
};
//Cow.cpp
void Cow::gainWeight() {
    Animal::gainWeight();
}
void Cow::eat() {
    cout << getName() << " the cow is eating." << endl;
    cout << getName() << " gained 20 pounds" << endl;
    Cow::gainWeight();
    cout << getName() << " now weighs " << getWeight() << endl;
}


//Barn.h
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
//Barn.cpp
Barn::Barn() {
    coop.push_back(Chicken("bob", 120, 214));
    stalls.push_back(Horse("asdf", 234, 23423));
    pen.push_back(Cow("agdfg", 435645, 2342));
}
void Barn::feedChickens() {
    for (int index = 0; index < coop.size(); index++ ) {
        coop[index].eat();
        cout << "Great Success, wawaweewa!" << endl;
    }
}
void Barn::feedCows() {
    for (int index = 0; index < pen.size(); index++ ) {
        pen[index].eat();
        cout << "Great Success, wawaweewa!" << endl;
    }
}
void Barn::feedHorses() {
    for (int index = 0; index < stalls.size(); index++ ) {
        stalls[index].eat();
        cout << "Great Success, wawaweewa!" << endl;
    }
}

int main() {

    Barn b; 
    b.feedChickens();
    b.feedCows();
    b.feedHorses();

    return 0;
}