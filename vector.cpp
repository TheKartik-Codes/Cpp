#include <iostream>
#include <vector> // Include the vector library
using namespace std;

int main() {
    // 1. Creating a vector
    vector<int> numbers;

    // 2. Adding elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "Elements in the vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // 3. Accessing elements using an index
    cout << "First element: " << numbers[0] << endl;
    cout << "Second element: " << numbers[1] << endl;

    // 4. Modifying an element
    numbers[1] = 25;
    cout << "After modifying, second element: " << numbers[1] << endl;

    // 5. Removing the last element
    numbers.pop_back();
    cout << "After removing the last element, vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // 6. Checking the size of the vector
    cout << "Size of the vector: " << numbers.size() << endl;

    // 7. Clearing all elements
    numbers.clear();
    cout << "After clearing, size of the vector: " << numbers.size() << endl;

    // 8. Checking if the vector is empty
    if (numbers.empty()) {
        cout << "The vector is empty." << endl;
    }

    return 0;
}