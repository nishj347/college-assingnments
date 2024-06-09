// Parameterized Polymorphism: Create a template function swap to exchange the values of
// two variables of any data type
#include <iostream>
using namespace std;
template <typename t>
void swapfunc(t &a,t&b){
    t temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=1;
    int y=2;
    cout<<"before swaping: "<<x<<","<<y<<endl;
    swapfunc(x,y);
    cout<<"after swaping: "<<x<<","<<y<<endl;

    char c1='a';
    char c2='b';
    cout<<"before swaping: "<<x<<","<<y<<endl;
    swapfunc(x,y);
    cout<<"after swaping: "<<x<<","<<y<<endl;
    return 0;
}