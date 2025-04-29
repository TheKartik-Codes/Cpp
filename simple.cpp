#include <iostream>
using namespace std;

/*
Program: Demonstrating Different Types of Loops in C++
This program shows examples of using:
1. For loop
2. While loop
3. Do-while loop
*/

int main() {
    // For loop: Print numbers from 1 to 5
    cout << "Using for loop: ";
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // While loop: Print numbers from 6 to 10
    cout << "Using while loop: ";
    int j = 6;
    while (j <= 10) {
        cout << j << " ";
        ++j;
    }
    cout << endl;

    // Do-while loop: Print numbers from 11 to 15
    cout << "Using do-while loop: ";
    int k = 11;
    do {
        cout << k << " ";
        ++k;
    } while (k <= 15);
    cout << endl;

    return 0;
}