#include<iostream>
using namespace std;



class Base {
public:
    virtual void display() {
        cout << "Display function from Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Display function from Derived class" << endl;
    }
};

int main() {
   Base obj;
   obj.display();
    return 0;
}
