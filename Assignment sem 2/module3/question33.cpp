// Nested Class: Implement a nested class Inner within an outer class Outer and demonstrate
// its usage.
#include <iostream>
using namespace std;
class outer{
    public:
    class inner {
        public:
        void show(){
            cout<<"inside inner class"<<endl;
        }
    };
    void show (){
        cout<<"inside outer class"<<endl;
    }
};
int main(){
    outer obj;
    obj.show();
    outer::inner obj1;
    obj1.show();
    return 0;
}