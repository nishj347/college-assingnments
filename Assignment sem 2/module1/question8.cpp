// Message Passing: Implement a program where two classes Sender and Receiver
// communicate by passing messages through member functions.

#include <iostream>
#include <string>

class Receiver; // Forward declaration of Receiver class

class Sender {
public:
    void sendMessage(Receiver& receiver, const std::string& message);
};

class Receiver {
public:
    void receiveMessage(const std::string& message) {
        std::cout << "Receiver got message: " << message << std::endl;
    }
};

void Sender::sendMessage(Receiver& receiver, const std::string& message) {
    receiver.receiveMessage(message);
}

int main() {
    Sender sender;
    Receiver receiver;

    sender.sendMessage(receiver, "Hello, World!");
    sender.sendMessage(receiver, "This is a message passing example.");

    return 0;
}

// #include <iostream>
// using namespace std;

// class reciever;

// class sender {
// public:
//     int a = 2, b = 3;
//     void send(reciever &r);
// };

// class reciever {
// public:
//     void display(int a, int b) {
//         cout << "no sender, you're wrong, their sum is: " << a + b << endl;
//     }
// };

// void sender::send(reciever &r) {
//     cout << "the sum of " << a << " and " << b << " is: " << a + b << endl;
//     r.display(a, b);
// }

// int main() {
//     sender s;
//     reciever r;
//     s.send(r);
//     return 0;
// }
