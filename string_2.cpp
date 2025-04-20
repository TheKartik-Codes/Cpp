#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {
    int left = 0;                  // Start pointer
    int right = str.length() - 1;  // End pointer

    while (left < right) {
        if (str[left] != str[right]) {
            return false;          // If characters don't match, it's not a palindrome
        }
        left++;                    // Move the left pointer forward
        right--;                   // Move the right pointer backward
    }
    return true;                   // If all characters match, it's a palindrome
}

int main() {
    string input;
    cout << "Enter a string to check if it's a palindrome: ";
    cin >> input;

    if (isPalindrome(input)) {
        cout << "The string \"" << input << "\" is a palindrome!" << endl;
    } else {
        cout << "The string \"" << input << "\" is not a palindrome." << endl;
    }

    return 0;
}