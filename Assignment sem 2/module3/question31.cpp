// Overriding Methods: Write a program where a derived class Derived overrides a method
// of the base class Base.
#include<iostream>
using namespace std;
class base{
    public:
    virtual void show(){}
};
class derived:public base{
    public:
    void show()override{
        cout<<"the function is overriden"<<endl;
    }
};
int main(){
    base *b=new derived;
    b->show();
    return 0;
}