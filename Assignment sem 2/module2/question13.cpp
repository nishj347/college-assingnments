// Scope Resolution Operator: Write a program to access a global variable using the scope
// resolution operator inside a class method.
#include<iostream>
using namespace std;
class demo{
    static  int globalvar;
    public:
    demo(){
        globalvar++;
    }
    static void display(){
        cout<<"the variable is: "<<globalvar<<endl;
    }
};

int demo::globalvar=5;
int main(){
    demo::display(); //output will be 5

    demo obj;//when this object is creted the constructor is called and value became 6
    demo::display(); // Output will be 6

    return 0;

}