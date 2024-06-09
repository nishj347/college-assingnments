// Base Class Constructor: Demonstrate how to call a base class constructor from a derived
// class in a program.

#include <iostream>
using namespace std;
class base{
int x;
public:
base(int x){
cout<<"the value of x: "<<x<<endl;
}

    
};
class derived:public base{
    public:
    derived(int x):base(x){
        cout<<"derived from base class: "<<x<<endl;
    }
};
int main(){
    derived obj(10);
    return 0;
}
