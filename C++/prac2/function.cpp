// Programming exercises on arrays, strings, function and pointers in C++

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;  // 0 and 1 are not prime numbers

    for (int i = 2; i < num; i++) {  // Check divisibility from 2 to num-1
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}