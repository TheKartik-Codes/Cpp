#include <iostream>
using namespace std;

void printArray(int* arr, int size) 
{
    cout << "Array elements accessed via pointer: ";
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() 
{
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Original array elements: ";
    for (int i = 0; i < 5; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    printArray(arr, 5);

    cout << "\nMemory addresses of array elements:" << endl;
    for (int i = 0; i < 5; i++) 
    {
        cout << "Address of arr[" << i << "] = " << &arr[i] << endl;
    }

    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "\nAccessing multi-dimensional array elements (row-major order):" << endl;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << "matrix[" << i << "][" << j << "] = " << matrix[i][j]
                 << " (Address: " << &matrix[i][j] << ")" << endl;
        }
    }

    return 0;
}