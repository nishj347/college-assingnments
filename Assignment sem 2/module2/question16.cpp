// Constructors and Destructors: Write a program that includes a class Point with
// constructors to initialize coordinates and a destructor to clean up.
#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
    point(){
        x=0;
        y=0;
    }
    ~point(){}

    point(int x,int y):x(x),y(y){}
    void display(){
        cout<<"value of "<<"x "<<x<<" and"<<"y "<<y<<endl;
    }

}; 

int main(){
    point p;
    p.display();

    point p1(3,4);
    p1.display();
    return 0;
}

