#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode 
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head) 
{
    ListNode* prev = NULL; // Previous node
    ListNode* curr = head; // Current node
    while (curr != NULL) 
    {
        ListNode* next = curr->next; // Save the next node
        curr->next = prev;          // Reverse the pointer
        prev = curr;                // Move prev forward
        curr = next;                // Move curr forward
    }
    return prev; // New head of the reversed list
}

// Helper function to print the linked list
void printList(ListNode* head) 
{
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Main function to test the reverseList function
int main()
{
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    // Reverse the linked list
    ListNode* reversedHead = reverseList(head);

    cout << "Reversed List: ";
    printList(reversedHead);

    return 0;
}