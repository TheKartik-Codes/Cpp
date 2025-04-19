#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // Create an unordered_set of integers
    unordered_set<int> mySet;

    // Insert elements into the unordered_set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(20); // Duplicate element, will be ignored

    // Display the elements in the unordered_set
    cout << "Elements in the unordered_set: ";
    for (int element : mySet) {
        cout << element << " ";
    }
    cout << endl;

    // Check if an element exists
    int key = 20;
    if (mySet.find(key) != mySet.end()) {
        cout << key << " is present in the unordered_set." << endl;
    } else {
        cout << key << " is not present in the unordered_set." << endl;
    }

    // Remove an element
    mySet.erase(10);
    cout << "After removing 10, elements in the unordered_set: ";
    for (int element : mySet) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}