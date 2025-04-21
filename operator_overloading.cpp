#include <iostream>
using namespace std;

// Class to represent a Box
class Box {
private:
    int length, width, height; // Dimensions of the box

public:
    // Constructor to initialize the dimensions
    Box(int l = 0, int w = 0, int h = 0) : length(l), width(w), height(h) {}

    // Overload the + operator to add two Box objects
    Box operator+(const Box& other) {
        return Box(length + other.length, width + other.width, height + other.height);
    }

    // Function to calculate the volume of the box
    int volume() const {
        return length * width * height;
    }

    // Function to display the dimensions of the box
    void display() const {
        cout << "Box Dimensions: " << length << " x " << width << " x " << height << endl;
    }
};

int main() {
    // Create two Box objects
    Box box1(2, 3, 4); // Box with dimensions 2x3x4
    Box box2(5, 6, 7); // Box with dimensions 5x6x7

    // Display the dimensions of the boxes
    cout << "Box 1: ";
    box1.display();
    cout << "Box 2: ";
    box2.display();

    // Add the two boxes using the overloaded + operator
    Box box3 = box1 + box2;

    // Display the dimensions and volume of the resulting box
    cout << "After adding Box 1 and Box 2:" << endl;
    box3.display();
    cout << "Volume of the resulting box: " << box3.volume() << endl;

    return 0;
}