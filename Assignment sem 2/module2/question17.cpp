//  Types of Constructors: Demonstrate default, parameterized, and copy constructors in a
// class Person
#include <iostream>
using namespace std;

class person {
    int x, y;
public:
    person() {
        x = 0;
        y = 0;
    }


    person(int x, int y) : x(x), y(y) {}


    person( person &p) {
        x = p.x;
        y = p.y;
    }
    void display() {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

int main() {
    person p1;
    p1.display(); 

    person p2(1, 2);
    p2.display(); 

    // Copy constructor
    person p3(p2);
    p3.display(); 

    return 0;
}


