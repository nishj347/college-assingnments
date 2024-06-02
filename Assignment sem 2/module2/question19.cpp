//  Array of Objects: Implement a program that creates an array of objects of a class Student
// and displays their details.
#include<iostream>
using namespace std;

class student{
    string name;
    int rollno;
    string branch;
    public:
    student(string n,int r,string b): name(n),rollno(r),branch(b){}
    void display(){
        cout<<"name of the student:"<<name<<endl;
        cout<<"roll no of the student: "<<rollno<<endl;
        cout<<"branch of the student:"<<branch<<endl;
    }
};
int main(){
    student s[3]={student("nish",23,"btech"),student("tasneem",456,"btech cse"),student("navneet",478,"btech")};
    for(int i=0;i<3;i++){
        s[i].display();
            }
            return 0;
}