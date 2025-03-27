// Programming exercises on operator overloading, type conversions and inheritance

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() = 0;  
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() override {
        cout << "AREA OF CIRCLE : ";
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() override {
        cout << "AREA OF RECTANGLE : ";
        return width * height;
    }
};

int main() {
    Shape* shape1 = new Circle(5);
    Shape* shape2 = new Rectangle(4, 6);

    cout << shape1->area() << endl; 
    cout << shape2->area() << endl;  

    // delete shape1;
    // delete shape2;

    return 0;
}