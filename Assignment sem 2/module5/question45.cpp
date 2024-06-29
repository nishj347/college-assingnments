// File Handling (Formatted I/O): Implement a program to read and write formatted data to
// a file using file streams.
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    ofstream outFile("student.txt");

    // Check if the file is open
    if (!outFile.is_open()) {
        cerr << "Unable to open file for writing." << endl;
        return 1;
    }

    // Write formatted data to the file
    outFile << setw(20) << left << "Name" 
            << setw(5) << "Age" << endl;
    outFile << setw(20) << left << "nish" 
            << setw(5) << 18 << endl;
    outFile << setw(20) << left << "jyotir" 
            << setw(5) << 20 << endl;
    outFile << setw(20) << left << "akshat" 
            << setw(5) << 19 << endl;

    outFile.close();

    cout << "Data written to file successfully." << endl;

    ifstream in("student.txt");
    string name;
    string age;
    while(in>>setw(20)>>name>>age){
        cout<<setw(20)<<
        left<<name<<setw(5)<<age<<endl;
    }
    in.close();

    return 0;
}

