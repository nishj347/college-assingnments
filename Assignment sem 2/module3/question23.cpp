//  Multiple Inheritance: Create a program that demonstrates multiple inheritance with
// classes Engine and Body as base classes and Car as a derived class.
#include <iostream>
using namespace std;

class engine {
public:
    virtual void show() {
        cout << "It is the heart of the car." << endl;
    }
};

class body {
public:
    virtual void show() {
        cout << "Car body is the outer structure of the vehicle that protects passengers and luggage from weather, impact, and damage." << endl;
    }
};

class car : public engine, public body {
public:
    string name;
    car(string n) : name(n) {}

    void show() override {
        cout << "The name of the car: " << name << endl;
    }
};

int main() {
    engine *e = new engine;
    engine *e1 = new car("Maserati");
    body *b = new body;
    body *b1 = new car("Ferrari");

    cout << "Engine show:" << endl;
    e->show();
    e1->show();

    cout << "\nBody show:" << endl;
    b->show();
    b1->show();

    delete e;
    delete e1;
    delete b;
    delete b1;

    return 0;
}

