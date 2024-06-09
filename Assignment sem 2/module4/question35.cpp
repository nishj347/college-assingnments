//  Operator Overloading (Unary): Overload the unary - operator in a class Vector to negate
// its components.
#include<iostream>
using namespace std;
class increase{
    private:
    int value;
    public:
    increase(){
    value=10;
    }

    increase operator++(int){
    value+=5;
    }

    void display(){
        cout<<"the increased value:"<<value<<endl;
    }
};

int main() {
    increase inc;
    inc++;
    inc.display();

    return 0;

}