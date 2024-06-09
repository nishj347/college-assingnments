// This Pointer: Write a class Box that uses the this pointer to return the current object from
// member functions.
#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    Box(double l = 1.0, double w = 1.0, double h = 1.0) : length(l), width(w), height(h) {}

    Box& setLength(double l) {
        length = l;
        return *this;
    }
    Box& setWidth(double w) {
        width = w;
        return *this; 
    }

    Box& setHeight(double h) {
        height = h;
        return *this; 
    }
    double volume() {
        return length * width * height;
    }
    void display()  {
        cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    Box box;
    box.setLength(10.0).setWidth(5.0).setHeight(3.0);
    box.display();
    cout << "Volume: " << box.volume() << endl;

    return 0;
}
