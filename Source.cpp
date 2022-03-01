//Zeferino Lino
//This is my own work with in help class
//main file

#include <iostream>
#include "Barn.h"

using namespace std;

int main() {

    Barn b; //initializing barn

    cout << endl; //newline for aesthetics 

    b.feedChickens();
    b.feedCows();
    b.feedHorses();

    return 0;
}