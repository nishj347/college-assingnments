#include <iostream>
#include <exception>
#include <string>

using namespace std;

// Define a custom exception class
class ChaaruError : public exception {
private:
    string message;

public:
    ChaaruError(const string& msg) : message(msg) {}

    virtual const char* what() const noexcept override {
        return message.c_str();
    }
};

// Function that throws the custom exception
void performChaaruOperation() {
    throw ChaaruError("Chaaru Error: Something chaaru happened!");
}

int main() {
    try {
        performChaaruOperation();
    } catch (const ChaaruError& e) {
        cout << "Caught ChaaruError: " << e.what() << endl;
    }

    return 0;
}
