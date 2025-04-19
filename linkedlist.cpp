#include <iostream>
using namespace std;

// Definition of a Node
struct Node {
    int data;       // Data part of the node
    Node* next;     // Pointer to the next node

    // Constructor to initialize a node
    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Function to insert a node at the beginning
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node(value); // Create a new node
    newNode->next = head;            // Point the new node to the current head
    head = newNode;                  // Update the head to the new node
}

// Function to insert a node at the end
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value); // Create a new node
    if (head == NULL) {              // If the list is empty
        head = newNode;
        return;
    }
    Node* temp = head;               // Temporary pointer to traverse the list
    while (temp->next != NULL) {     // Traverse to the last node
        temp = temp->next;
    }
    temp->next = newNode;            // Point the last node to the new node
}

// Function to delete a node with a given value
void deleteNode(Node*& head, int value) {
    if (head == NULL) return;        // If the list is empty, do nothing

    if (head->data == value) {       // If the head node is to be deleted
        Node* temp = head;
        head = head->next;           // Update the head to the next node
        delete temp;                 // Free the memory of the old head
        return;
    }

    Node* temp = head;               // Temporary pointer to traverse the list
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }

    if (temp->next == NULL) return;  // If the value is not found, do nothing

    Node* nodeToDelete = temp->next; // Node to be deleted
    temp->next = temp->next->next;   // Bypass the node to be deleted
    delete nodeToDelete;             // Free the memory of the deleted node
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;               // Temporary pointer to traverse the list
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;               // Initialize an empty linked list

    // Insert nodes at the beginning
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);

    cout << "Linked List after inserting at the beginning: ";
    printList(head);

    // Insert nodes at the end
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    cout << "Linked List after inserting at the end: ";
    printList(head);

    // Delete a node
    deleteNode(head, 20);

    cout << "Linked List after deleting node with value 20: ";
    printList(head);

    return 0;
}
