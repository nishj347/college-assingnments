// Constant Member Functions: Write a class Clock with constant member functions to get
// the time.
#include<iostream>
using namespace std;

class Clock {
    int hour;
    int minute;
    int seconds;
public:
    // Constructor to initialize the time
    Clock(int h, int m, int s): hour(h), minute(m), seconds(s) {}

    // Constant member functions to get the time
    int getHour() const {
        return hour;
    }

    int getMinute() const {
        return minute;
    }

    int getSecond() const {
        return seconds;
    }

    // void display() const {
    //     cout << "Time: " << hour << ":" << minute << ":" << seconds << endl;
    // }
};

int main() {
    Clock c(2, 30, 18);

    cout << "The time is: " << c.getHour() << ":" << c.getMinute() << ":" << c.getSecond() << endl;

    // // Display the complete time
    // c.display();

    return 0;
}
