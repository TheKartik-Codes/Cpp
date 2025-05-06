#include <iostream>
using namespace std;

/*
Program: Introduction to Objects in C++
This program demonstrates the concept of objects in C++.
An object is an instance of a class, and it allows access to the members (variables and functions) of the class.
*/

class Car {
public:
    // Data members (attributes)
    string brand;
    string model;
    int year;

    // Member function (method)
    void displayDetails() {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Create an object of the Car class
    Car car1;

    // Assign values to the object's attributes
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;

    // Call the object's method to display details
    car1.displayDetails();

    return 0;
}