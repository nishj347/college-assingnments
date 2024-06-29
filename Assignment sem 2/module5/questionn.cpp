#include <iostream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    
    cin >> n;

    switch (n) {
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;
        case 4:
            cout << "four" << endl;
            break;
        case 5:
            cout << "five" << endl;
            break;
        case 6:
            cout << "six" << endl;
            break;
        case 7:
            cout << "seven" << endl;
            break;
        case 8:
            cout << "eight" << endl;
            
        case 9:
            cout << "nine" << endl;
            
        case 10:
        if (n > 9) {
                cout << (n % 2 == 0 ? "even" : "0dd") << endl;
            } 
            // if (n<9){
            //     cout << (n % 2 == 0 ? "even" : "dd") << endl; 
            // }
            
            else {
                default:
                cout << "odd" << endl;

    }
return 0;
}
  


