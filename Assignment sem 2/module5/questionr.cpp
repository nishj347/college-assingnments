#include <iostream>
using namespace std;
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 10,b = 20;
    double a = 15.5, b = 10.2;
    char char1 = 'a', char2 = 'z';

    cout << "Max of " << a<< " and " << b << " is " << findMax(a, b) << endl;
    cout << "Max of " << a<< " and " << b << " is " << findMax(a, b) << endl;
    cout << "Max of " << char1 << " and " << char2 << " is " << findMax(char1, char2) << endl;

    return 0;
}
