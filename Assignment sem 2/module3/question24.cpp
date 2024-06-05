// Access Specifiers: Write a program to demonstrate public, private, and protected
// inheritance.
#include<iostream>
using namespace std;
class specifiers{
    int y=1;       //private data memeber
    protected:
    int z=2;
    public:
    int x=3;

    int getprivate(){            //to access private data member as it can't get inherited
        return y;
    }
};
class access: public specifiers{
    public:
    int getprotected(){                  //protected data member got inherited from base class
        return z;
    }
};

int main(){
    access obj;
    cout<<"private data memeber:"<<obj.getprivate()<<endl;
    cout<<"public data member: "<<obj.x<<endl;                     //can be accessed directly
    cout<<"protected data member: "<<obj.getprotected()<<endl;
    return 0;
}