// Function Overloading: Implement function overloading in a class MathOperations with
// different multiply methods
#include<iostream>
using namespace std;

class multiply{
    public:
    int x;
    int y;
    int z;
    int getmultiplication(int x,int y){
        return x*y;
    }
    int getmultiplication(int x,int y,int z){
        return x*y*z;
    }
};
int main(){
    multiply m;
    int result = m.getmultiplication(3,4);
    cout<<"multiplication result is : "<<result<<endl;
    int result1=m.getmultiplication(2,3,9);
    cout<<"the multiplication result of three numbers: "<<result1<<endl;
    return 0;
}