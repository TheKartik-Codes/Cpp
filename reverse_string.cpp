#include<iostream>

using namespace std;

// Function to reverse a string
string reverseString(string str) {
    int n = str.length(); // Get the length of the string
    string reversedStr = ""; // Initialize an empty string to store the reversed string

    // Loop through the string in reverse order
    for (int i = n - 1; i >= 0; i--) {
        reversedStr += str[i]; // Append each character to the reversed string
    }

    return reversedStr; // Return the reversed string
}

int main()
{
    string inputString; // Variable to store the input string
    cout << "Enter a string: "; // Prompt the user for input
    getline(cin, inputString); // Read the entire line of input
    string reversedString = reverseString(inputString); // Call the function to reverse the string
    cout << "Reversed string: " << reversedString << endl; // Output the reversed string

    return 0;
}