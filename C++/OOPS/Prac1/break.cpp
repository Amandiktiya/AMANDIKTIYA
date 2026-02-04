// Programming exercises on control flow statements in C++

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Stops the loop when i is 5
        }
        cout << i << "";
    }
    return 0;
}