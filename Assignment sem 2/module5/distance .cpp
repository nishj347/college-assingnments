#include <iostream>
using namespace std;

class Distance {
private:
    int kilometers;
    int meters;
    int centimeters;

public:

    Distance(int km = 0, int m = 0, int cm = 0) {
        kilometers = km;
        meters = m;
        centimeters = cm;
        normalize();
    }

    void normalize() {
        meters += centimeters / 100;
        centimeters %= 100;
        kilometers += meters / 1000;
        meters %= 1000;
    }
    Distance operator+( Distance& d) {
        int totalkm = kilometers + d.kilometers;
        int totalm = meters + d.meters;

        int totalcm = centimeters + d.centimeters;

        return Distance(totalkm, totalm, totalcm);
    }

    void display() const {
        cout << kilometers << " km " << meters << " m " << centimeters << " cm" << endl;
    }
};

int main() {
    Distance d1(3, 750, 90); 
        Distance d2(2, 300, 110); 

    Distance d3 = d1 + d2; 

    cout << "Distance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    cout << "Total Distance: ";
    d3.display();

    return 0;
}
