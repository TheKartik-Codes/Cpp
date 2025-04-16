#include <iostream>
#include <stack> // Include the stack library
using namespace std;

int main() {
    // Create a stack of integers
    stack<int> myStack;

    // Push elements onto the stack
    cout << "Pushing elements onto the stack: 10, 20, 30" << endl;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Display the top element
    cout << "Top element of the stack: " << myStack.top() << endl;

    // Pop an element from the stack
    cout << "Popping the top element..." << endl;
    myStack.pop();

    // Display the top element after popping
    cout << "Top element after popping: " << myStack.top() << endl;

    // Push another element
    cout << "Pushing another element: 40" << endl;
    myStack.push(40);

    // Display all elements in the stack
    cout << "Current stack elements (from top to bottom): ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}