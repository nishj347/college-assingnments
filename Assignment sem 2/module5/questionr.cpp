#include <iostream>

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 10,b = 20;
    double a = 15.5, b = 10.2;
    char char1 = 'a', char2 = 'z';

    std::cout << "Max of " << a<< " and " << b << " is " << findMax(a, b) << std::endl;
    std::cout << "Max of " << a<< " and " << b << " is " << findMax(a, b) << std::endl;
    std::cout << "Max of " << char1 << " and " << char2 << " is " << findMax(char1, char2) << std::endl;

    return 0;
}
