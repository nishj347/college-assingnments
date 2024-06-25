#include <iostream>
using namespace std;
class MyClass {
public:
    int data;
    void setData(int d) {
        data = d;
    }
    void display() {
        cout << "Data: " << data << endl;
    }
};
int main() {
    MyClass arr[2];
    for (int i = 0; i < 2; ++i) {
        arr[i].setData(i + 1);
    }
    for (int i = 0; i < 2; ++i) {
        arr[i].display();
    }
    return 0;
}