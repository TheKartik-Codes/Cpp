#include <iostream>
using namespace std;

/*
Program: Doubly Linked List in C++
This program demonstrates the basic operations of a doubly linked list:
1. Insertion at the beginning
2. Insertion at the end
3. Deletion of a node
4. Traversal in forward and reverse directions
*/

struct Node {
    int data; // Data stored in the node
    Node* prev; // Pointer to the previous node
    Node* next; // Pointer to the next node

    // Constructor to initialize a new node
    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head; // Pointer to the head of the list
    Node* tail; // Pointer to the tail of the list

public:
    // Constructor to initialize an empty list
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Function to insert a node at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        if (!head) { // If the list is empty
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        cout << "Inserted " << value << " at the beginning.\n";
    }

    // Function to insert a node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (!tail) { // If the list is empty
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        cout << "Inserted " << value << " at the end.\n";
    }

    // Function to delete a node with a specific value
    void deleteNode(int value) {
        if (!head) { // If the list is empty
            cout << "List is empty. Cannot delete " << value << ".\n";
            return;
        }

        Node* current = head;
        while (current && current->data != value) {
            current = current->next;
        }

        if (!current) { // If the value is not found
            cout << "Value " << value << " not found in the list.\n";
            return;
        }

        // If the node to be deleted is the head
        if (current == head) {
            head = head->next;
            if (head) head->prev = nullptr;
        }

        // If the node to be deleted is the tail
        if (current == tail) {
            tail = tail->prev;
            if (tail) tail->next = nullptr;
        }

        // If the node to be deleted is in the middle
        if (current->prev) current->prev->next = current->next;
        if (current->next) current->next->prev = current->prev;

        delete current;
        cout << "Deleted " << value << " from the list.\n";
    }

    // Function to traverse the list in forward direction
    void traverseForward() {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }

        cout << "List in forward direction: ";
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Function to traverse the list in reverse direction
    void traverseReverse() {
        if (!tail) {
            cout << "List is empty.\n";
            return;
        }

        cout << "List in reverse direction: ";
        Node* current = tail;
        while (current) {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }

    // Destructor to free memory
    ~DoublyLinkedList() {
        Node* current = head;
        while (current) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        cout << "Doubly linked list destroyed.\n";
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertAtBeginning(10);
    dll.insertAtBeginning(20);
    dll.insertAtEnd(30);
    dll.insertAtEnd(40);

    dll.traverseForward();
    dll.traverseReverse();

    dll.deleteNode(20);
    dll.traverseForward();

    dll.deleteNode(50); // Attempt to delete a non-existent value
    dll.traverseReverse();

    return 0;
}