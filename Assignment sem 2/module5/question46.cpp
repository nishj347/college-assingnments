//  Function Template: Implement a generic function template to find the maximum of two
// values
#include <iostream>
using namespace std;

template <typename t>
t findmax(t a, t b){
    return (a>b)?a:b;
}