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

};

int main() {
    Clock c(2, 30, 18);

    cout << "The time is: " << c.getHour() << ":" << c.getMinute() << ":" << c.getSecond() << endl;


    return 0;
}
