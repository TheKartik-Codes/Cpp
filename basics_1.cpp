#include <iostream>
#include <unordered_set>
using namespace std;

// Function to find the first repeated character in a string
char findFirstRepeatedChar(const string& str) {
    unordered_set<char> seen; // Set to store characters we've seen so far

    for (char ch : str) { // Loop through each character in the string
        if (seen.find(ch) != seen.end()) { // If the character is already in the set
            return ch; // Return the first repeated character
        }
        seen.insert(ch); // Otherwise, add the character to the set
    }

    return '\0'; // If no repeated character is found, return '\0'
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    char result = findFirstRepeatedChar(input);

    if (result != '\0') {
        cout << "The first repeated character is: " << result << endl;
    } else {
        cout << "No repeated characters found." << endl;
    }

    return 0;
}