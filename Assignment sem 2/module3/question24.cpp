// Access Specifiers: Write a program to demonstrate public, private, and protected
// inheritance.
#include<iostream>
using namespace std;
class specifiers{
    int y=1;
    protected:
    int z=2;
    public:
    int x=3;

    int getprivate(){
        return y;
    }
};
class access: public specifiers{
    public:
    int getprotected(){
        return z;
    }
};

int main(){
    access obj;
    cout<<"private data memeber:"<<obj.getprivate()<<endl;
    cout<<"public data member: "<<obj.x<<endl;
    cout<<"protected data member: "<<obj.getprotected()<<endl;
    return 0;
}