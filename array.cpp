#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Array elements and their memory addresses:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] 
             << " (Address: " << &arr[i] << ")" << endl;
    }

    cout << "\nAccessing elements using index:" << endl;
    cout << "First element: " << arr[0] << endl;
    cout << "Last element: " << arr[4] << endl;

    cout << "\nModifying an element:" << endl;
    arr[2] = 100;
    cout << "After modification, arr[2] = " << arr[2] << endl;

    cout << "\nOut-of-bounds access (undefined behavior):" << endl;
    cout << "arr[5] = " << arr[5] << " (This is invalid!)" << endl;

    cout << "\nIterating through the array using a pointer:" << endl;
    int* ptr = arr;
    for (int i = 0; i < 5; i++) {
        cout << "*(ptr + " << i << ") = " << *(ptr + i) << endl;
    }

    return 0;
}