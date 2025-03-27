#include <iostream>
using namespace std;

class Distance {
private:
    int cm;
public:
    Distance(int cm) : cm(cm) {}

    
    operator int() {
        return cm / 100; 
    }

    
    explicit operator double() {
        return cm / 100.0;
    }
};

int main() {
    Distance d(100);
    int meters = d;  
    cout << "meters : " << d << endl;  
    return 0;
}