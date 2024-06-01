// Inline Function: Define an inline function within a class Calculator that performs basic
// arithmetic operations.
#include <iostream>
#include<cmath>
using namespace std;
class calculator{
    int a,b;
    public:
    calculator(int a,int b):a(a),b(b){}
    inline int add(){
        cout<<"the addition is:"<< a+b<<endl;;
    }
    inline int subtract(){
        cout<<"the substraction is:"<< abs(a-b)<<endl;
    }
    inline int multiply(){
        cout<<"the multiplication is:"<<a*b<<endl;;
    }
    inline int division(){
        cout<<"the division is:"<< a/b<<endl;
    }
};
int main(){
    calculator c(1,2);
    c.add();
    c.subtract();
    c.multiply();
    c.division();
    return 0;
}