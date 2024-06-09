// Classification Hierarchies: Create a classification hierarchy with a base class Appliance
// and derived classes Washer and Dryer.
#include <iostream>
using namespace std;

class appliance {
    string model;
    string brand;
public:
    appliance(string m, string b) : model(m), brand(b) {}

    virtual void display() {
        cout << "Model name: " << model << endl;
        cout << "Brand name: " << brand << endl;
    }
};

class washer : public appliance {
    int loadcapacity;
public:
    washer(string m, string b, int l) : appliance(m, b), loadcapacity(l) {}

    void display() override {
        appliance::display();
        cout << "the load capacity of the appliance: " << loadcapacity << " kg" << endl;
    }
};

class dryer : public appliance {
    int size;
public:
    dryer(string m, string b, int s) : appliance(m, b), size(s) {}

    void display() override {
        appliance::display();
        cout << "Drum size: " << size << " liters" << endl;
    }
};

int main() {
    washer myWasher("LG", "TWINWash", 7);
    dryer myDryer("Samsung", "AirDresser", 10);

    cout << "Washer details:" << endl;
    myWasher.display();
    cout << endl;

    cout << "Dryer details:" << endl;
    myDryer.display();

    return 0;
}
