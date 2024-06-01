// Friend Function: Implement a friend function that accesses the private members of a class
// Box.
#include<iostream>
using namespace std;

class circle{
    double radius;
    public:
    circle(double r):radius(r){}
    friend void area(circle c);
};
void area(circle c){
    int a=3.14*c.radius*c.radius;
    cout<<"the area of the circle: "<<a<<endl;
}
int main(){
    circle c(5.0);
    area(c);
    return 0;
}

