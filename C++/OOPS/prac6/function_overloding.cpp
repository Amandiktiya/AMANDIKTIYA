#include <iostream>
using namespace std;

// Function to calculate the area of a square
double calculateArea(double side) {
    return side * side;
}

// Function to calculate the area of a rectangle
double calculateArea(double width, double height) {
    return width * height;
}

// Function to calculate the area of a circle
double calculateAreaCircle(double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

int main() {
    cout << "Area of square (side = 5): " << calculateArea(5) << endl;
    cout << "Area of rectangle (width = 4, height = 6): " << calculateArea(4, 6) << endl;
    cout << "Area of circle (radius = 3): " << calculateAreaCircle(3) << endl;

    return 0;
}
