#include <iostream>
using namespace std;

// Parent class (Base class)
class Vehicle {
public:
    int speed;

    // Constructor to initialize speed
    Vehicle(int s) : speed(s) {}

    // Function to display the speed of the vehicle
    void displaySpeed() {
        cout << "Speed of the vehicle: " << speed << " km/h" << endl;
    }
};

// Child class (Derived class)
class Car : public Vehicle {
public:
    string brand;

    // Constructor to initialize speed and brand
    Car(int s, string b) : Vehicle(s), brand(b) {}

    // Function to display the brand of the car
    void displayBrand() {
        cout << "Brand of the car: " << brand << endl;
    }
};

int main() {
    // Create an object of the Car class
    Car myCar(120, "Toyota");

    // Access functions from the parent class
    myCar.displaySpeed();

    // Access functions from the child class
    myCar.displayBrand();

    return 0;
}