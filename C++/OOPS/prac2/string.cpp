// Programming exercises on arrays, strings, function and pointers in C++#include <iostream>


#include <algorithm>
using namespace std;

int main() {
    string str = "Hello World!";
    reverse(str.begin(), str.end());
    cout << "Reversed String: " << str << endl;
    return 0;
}