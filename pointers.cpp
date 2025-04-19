#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable
    int x = 42;

    // Declare a pointer and store the address of x
    int* ptr = &x;

    // Print the value of x and its address
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;

    // Print the value stored in the pointer (address of x)
    cout << "Pointer ptr stores the address: " << ptr << endl;

    // Dereference the pointer to access the value of x
    cout << "Value at the address stored in ptr: " << *ptr << endl;

    // Modify the value of x using the pointer
    *ptr = 100;
    cout << "Value of x after modifying through pointer: " << x << endl;

    // Null pointer example
    int* nullPtr = nullptr;
    cout << "Null pointer value: " << nullPtr << endl;

    return 0;
}