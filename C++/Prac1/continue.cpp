// Programming exercises on control flow statements in C++

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            continue;  // Skips odd numbers
        }
        cout << i << " ";
    }
    return 0;
}