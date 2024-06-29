#include <iostream>
#include <fstream>
#include <cstring> // For memcpy
using namespace std;

int main() {
    int num = 12345;
    float pi = 3.14f;


    ofstream out("demo.bin", ios::binary);

    // Check if the file was successfully opened
    if (!out) {
        cerr << "Failed to open the file for writing." << endl;
        return 1;
    }

    // Use an intermediate buffer to write data
    out.write((char*)&num, sizeof(num));
    out.write((char*)&pi, sizeof(pi));

    // Close the file
    out.close();

    cout << "Data written successfully." << endl;
    return 0;
}

