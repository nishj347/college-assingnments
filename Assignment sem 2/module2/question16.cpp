// Constructors and Destructors: Write a program that includes a class Point with
// constructors to initialize coordinates and a destructor to clean up.
#include<iostream>
using namespace std;
class rectangle{
    public:

    virtual void area(){}
    virtual ~rectangle(){}
};
class clacarea:public rectangle{
    int length;
    int breadth;
    public:
    clacarea(int l,int b):length(l),breadth(b){}
void  area()override{
    cout<<"the area of rectangle is : "<<length*breadth<<endl;
}
};
int main(){
    rectangle *r=new clacarea(2,3);
    r->area();

    delete r;
    return 0;

}