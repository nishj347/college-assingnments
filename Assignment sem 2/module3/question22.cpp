// Single Inheritance: Implement single inheritance with a base class Vehicle and a derived
// class Car.
#include<iostream>
using namespace std;
class vehicle{
    public:
    virtual void wheel(){}
};
class car: public vehicle{
    int no_of_wheels;
    public:
    car(){
        no_of_wheels=4;
    }
    void wheel(){
        cout<<"the no of wheels in car:"<<no_of_wheels<<endl;
    }
};
int main(){
    vehicle *v=new car;
    v->wheel();
    return 0;
}