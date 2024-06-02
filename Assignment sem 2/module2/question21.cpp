// Memory Management Operators: Demonstrate the use of new and delete operators in a
// class DynamicArray to allocate and deallocate memory.

#include<iostream>
using namespace std;
class shape{
public:
virtual void area(){}
~shape(){}
};
class rectangle:public shape{
    int length ;
    int breadth;
    public:
    rectangle(int l,int b):length(l),breadth(b){}
        void area(){
            cout<<"the area of rectangle is:"<<length*breadth<<endl;
        }
};

int main(){
    shape *s=new rectangle(2,3);
    s->area();
    delete s;
    return 0;
}


