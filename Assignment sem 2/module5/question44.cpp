#include <iostream>
#include <fstream>
#include <cstring> // For memcpy
using namespace std;

int main() {
    int num = 12345;
    float pi = 3.14f;


    ofstream outFile("demo.bin", ios::binary);

    // Check if the file was successfully opened
    if (!outFile) {
        cerr << "Failed to open the file for writing." << endl;
        return 1;
    }

    // Use an intermediate buffer to write data
    outFile.write((char*)&num, sizeof(num));
    outFile.write((char*)&pi, sizeof(pi));

    // Close the file
    outFile.close();

    cout << "Data written successfully." << endl;
    return 0;
}

