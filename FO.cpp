#include <iostream>
using namespace std;

/*
Program: Function Overloading in C++
This program demonstrates the concept of function overloading.
Function overloading allows multiple functions with the same name but different parameter lists.
The compiler determines which function to call based on the number and type of arguments.

Example:
1. Calculate the area of a square (one parameter).
2. Calculate the area of a rectangle (two parameters).
3. Calculate the area of a circle (one parameter, but of a different type).
*/

// Function to calculate the area of a square
int area(int side) {
    return side * side;
}

// Function to calculate the area of a rectangle
int area(int length, int width) {
    return length * width;
}

// Function to calculate the area of a circle
double area(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    // Calculate the area of a square
    int squareSide = 5;
    cout << "Area of square with side " << squareSide << " is: " << area(squareSide) << endl;

    // Calculate the area of a rectangle
    int rectLength = 4, rectWidth = 6;
    cout << "Area of rectangle with length " << rectLength << " and width " << rectWidth << " is: " << area(rectLength, rectWidth) << endl;

    // Calculate the area of a circle
    double circleRadius = 3.5;
    cout << "Area of circle with radius " << circleRadius << " is: " << area(circleRadius) << endl;

    return 0;
}