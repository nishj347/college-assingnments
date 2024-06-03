//  Multiple Inheritance: Create a program that demonstrates multiple inheritance with
// classes Engine and Body as base classes and Car as a derived class.
#include<iostream>
using namespace std;

class engine {
public:
    virtual void show() {  
        cout << "it is the heart of the car" << endl;
    }
};

class body : public engine {
public:
    string name;
    void show() override { 
        cout << "car body is the outer structure of the vehicle that protects passengers and luggage from weather, impact, and damage." << endl;
    }
};

class car : public body {
public:
    car(string n) : body() {  
        name = n;  
    }
    void show() override { 
        cout << "the name of the car: " << name << endl;
    }
};

int main() {
    engine *e = new body;
    engine *e1 = new car("Maserati");
    e->show();
    e1->show();
    delete e;  
    delete e1;  
    return 0;
}
