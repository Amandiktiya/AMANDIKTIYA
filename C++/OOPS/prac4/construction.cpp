// Writing programs for constructors,destructors,using public andp rivate access specifies

#include <iostream>
using namespace std;

class Car {
private:
    string model; 
public:
    Car(string b, string m, int y)
    { cout << "CONSTRUCTION CALLED\n"; 
        brand = b;
        model = m; 
        year = y; }
    
    ~Car() { cout << "DESTRUCTION CALLED\n"; }
    void show()
    { cout << brand << " " << model << " " << year << endl; }
    string brand; int year;
};

int main() {
    Car car1("Toyota", "Corolla", 2022);
    car1.show();    
    return 0;
}