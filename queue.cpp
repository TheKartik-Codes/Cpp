#include <iostream>
#include <queue> // This is the standard library for using queues

using namespace std;

int main() {
    // Create a queue of integers
    queue<int> myQueue;

    // Adding elements to the queue (Enqueue)
    myQueue.push(10); // First in line
    myQueue.push(20); // Second in line
    myQueue.push(30); // Third in line

    cout << "Elements added to the queue: 10, 20, 30" << endl;

    // Accessing the front element
    cout << "Front element (first to come out): " << myQueue.front() << endl;

    // Accessing the back element
    cout << "Back element (last added): " << myQueue.back() << endl;

    // Removing elements from the queue (Dequeue)
    myQueue.pop(); // Removes 10

    cout << "After removing one element..." << endl;
    cout << "New front element: " << myQueue.front() << endl;

    // Checking the size of the queue
    cout << "Current queue size: " << myQueue.size() << endl;

    // Checking if the queue is empty
    if (myQueue.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    return 0;
}