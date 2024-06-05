//  Abstract Class: Define an abstract class Employee with a pure virtual function
// calculateSalary() and derive classes FullTime and PartTime that implement the function
#include <iostream>
using namespace std;

class employee {
public:
    virtual void getinfo() = 0;
    virtual void calculatesalary() = 0;
    virtual void display() = 0;
    virtual ~employee() {}  
};

class fulltime : public employee {
protected:
    int hour_worked;
    int salary;
public:
    void getinfo() override {
        cout << "no of hours the employee worked: ";
        cin >> hour_worked;
        cout << "current salary: ";
        cin >> salary;
    }

    void calculatesalary() override {
        if (hour_worked >= 12) {
            salary += 500;
        }
    }

    void display() override {
        cout << "salary: " << salary << endl;
    }
};

class halftime : public employee {
protected:
    int hour_worked;
    int salary;
public:
    void getinfo() override {
        cout << "no of hours the employee worked: ";
        cin >> hour_worked;
        cout << "current salary: ";
        cin >> salary;
    }

    void calculatesalary() override {
        if (hour_worked < 12) {
            salary += 250;
        }
    }

    void display() override {
        cout << "salary: " << salary << endl;
    }
};

int main() {
    employee *e = new fulltime;
    employee *e1 = new halftime;

    cout << "full-time employee: " << endl;
    e->getinfo();
    e->calculatesalary();
    e->display();

    cout << "half-time employee: " << endl;
    e1->getinfo();
    e1->calculatesalary();
    e1->display();

    delete e;
    delete e1;

    return 0;
}
