// Composition: Implement composition by creating a class Library that contains objects of
// class Book.
#include <iostream>
#include <string>

using namespace std;
class book {
private:
    string title;
    string author;
    int year;
    public:
    book(string t, string a, int y) : title(t), author(a), year(y) {}

    void display() const {
        cout << "Title: " << title <<endl;
        cout<< "Author: " << author <<endl;
        cout<< "Year: " << year << endl;
    }
};

class library {
private:
    string libraryName;
    book book1; // Book obj as member
    book book2; 

public:
    
    library(string name, book b1, book b2) : libraryName(name), book1(b1), book2(b2) {}
    void display() const {
        cout << "Library Name: " << libraryName << endl;
        cout << "Book 1: "<<endl;
        book1.display();
        cout << "Book 2: "<<endl;
        book2.display();
    }
};

int main() {
    
    book b1("wrong bride", "DA MAURA", 1949);
    book b2("a good girl's guide to murder", " Holly Jackson", 1960);

    library lib("hogwarts Library", b1, b2);

    lib.display();

    return 0;
}
