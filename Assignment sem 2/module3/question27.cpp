// Virtual Base Class: Implement a virtual base class Device and derive classes Scanner and
// Printer from it. Then derive a class AllInOne from Scanner and Printer.
#include<iostream>
using namespace std;
class device{
    public:
    void showname(){
        cout<<"name of the device who can print and scan: fax"<<endl;
    }
};
class scanner:virtual public device{
    public:
    void show(){
        cout<<"fax can scan"<<endl;
    }
};
class printer:virtual public device{
    public:
    void show(){
        cout<<"fax can print as well"<<endl;
    }
};
class allinone:public scanner ,public printer{
    public:
    void display(){
        cout<<"fax can scan and print both"<<endl;
    }
    void show() {
        scanner::show();
        printer::show();
    }
};
int main(){
    allinone obj;
    obj.show();
    obj.display();
    obj.showname();
    return 0;

}