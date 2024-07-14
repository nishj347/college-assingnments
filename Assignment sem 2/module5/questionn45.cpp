// Basic Exception Handling: Create a program to handle division by zero using try, catch,
// and throw
#include<iostream>
using namespace std;
double division(double numerator,double denominator){
    if (denominator==0){
        throw runtime_error("division by zero not possible");
    }
    return numerator/denominator;
}
int main(){
    double num,denum,result;
    cout<<"enter numerator:"<<endl;
    cin>>num;
    cout<<"enter denumoninator:"<<endl;
    cin>>denum;
    try{
        result=division(num,denum);
        cout<<result;
    }
    catch(runtime_error &e){
        cerr<<"error:"<<e.what()<<endl;
    }
    return 0;
}

