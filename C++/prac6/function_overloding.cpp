// Programming exercises on functional overloading
#include <iostream>
#include <string>
#include <cmath>    
#include <vector>

using namespace std;

int process_input(const string& str) {
    return str.length();
}

int process_input(int num) {
    return num * num;
}

double process_input(double num) {
    return sqrt(num);
}

int process_input(const vector<int>& vec) {
    int sum = 0;
    for (int val : vec) {
        sum += val;
    }
    return sum;
}

const char* process_input(...) {
    return "Unsupported type";
}

int main() {
    cout << "process_input(\"hello\") = " << process_input("hello") << endl;
    cout << "process_input(4) = " << process_input(4) << endl;
    cout << "process_input(9.0) = " << process_input(9.0) << endl;
    
    vector<int> vec = {1, 2, 3};
    cout << "process_input({1, 2, 3}) = " << process_input(vec) << endl;
    
    cout << "process_input(true) = " << process_input(true) << endl;

    return 0;
}