// Writing programs on stream computation.
#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    int num;
    int sum = 0;
    int count = 0;
    
    cout << "Enter numbers to calculate running sum and average. Enter -1 to stop." << endl;
    
    while (true) {
        cout << "Enter a number (or -1 to stop): ";
        cin >> num;

        if (num == -1) {
            break;
        }

        sum += num;
        count++;

        double average = static_cast<double>(sum) / count;

        cout << "Running Sum: " << sum << ", Running Average: " << fixed << setprecision(2) << average << endl;
    }

    cout << "Program terminated." << endl;
    return 0;
}