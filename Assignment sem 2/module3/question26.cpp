// Scope Resolution Operator: Use the scope resolution operator to resolve ambiguity in
// multiple inheritance with a class Person derived from Father and Mother.
#include <iostream>
using namespace std;
class father{
    public:
    void show(){
        cout<<"father's traits: strong independent cool"<<endl;
    }

};
class mother{
    public:
    void show(){
        cout<<"mother's traits: caring intelligent pretty"<<endl;
    }
};
class person:public mother,public father{
    public:
    void show(){
        cout<<"the person child traits: weird introvert mean"<<endl;
    }
    void showfathertrait(){
        father::show();
    }
    void showmothertrait(){
        mother::show();
    }
};
int main(){
    person p;
    p.show();
    p.showfathertrait();
    p.showmothertrait();
    return 0;
}