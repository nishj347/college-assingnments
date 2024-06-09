    // Pointer to Objects: Demonstrate the use of pointers to objects with a class Employee and
    // dynamically allocate memory for an object.
#include<iostream>
using namespace std;
class employee {
    string name;
    public:
    employee(string n):name(n){}
    void show(){
        cout<<"name of the employee:"<<name<<endl;
    }
};

int main(){
    employee *e=new employee("tasneem");
    e->show();
    return 0;



}