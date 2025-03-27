#include <iostream>
using namespace std;

// Base class (Parent)
class Person {
protected:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Display function
    void showPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class (Child)
class Student : public Person {
private:
    int studentID;

public:
    // Constructor (calls base class constructor)
    Student(string n, int a, int id) : Person(n, a) {
        studentID = id;
    }

    // Display function (overrides base class method)
    void showStudent() {
        showPerson();  // Call base class function
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    // Creating object of base class
    Person person1("Alice", 30);
    person1.showPerson();

    // Creating object of derived class
    Student student1("Bob", 20, 101);
    student1.showStudent();

    return 0;
}