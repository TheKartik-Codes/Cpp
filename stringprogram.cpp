#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

// Function to reverse a string
string reverseString(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {
    string cleanStr;
    for (char c : str) {
        if (isalpha(c)) {
            cleanStr += tolower(c);
        }
    }
    string reversed = cleanStr;
    reverse(reversed.begin(), reversed.end());
    return cleanStr == reversed;
}

// Function to count vowels in a string
int countVowels(const string& str) {
    int count = 0;
    const string vowels = "aeiouAEIOU";
    for (char c : str) {
        if (vowels.find(c) != string::npos) {
            count++;
        }
    }
    return count;
}

// Function to count words in a string
int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    
    for (char c : str) {
        if (isspace(c)) {
            if (inWord) {
                count++;
                inWord = false;
            }
        } else {
            inWord = true;
        }
    }
    
    // Count the last word if the string doesn't end with space
    if (inWord) {
        count++;
    }
    
    return count;
}

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    cout << "\nString Operations:\n";
    cout << "1. Original String: " << input << endl;
    cout << "2. Reversed String: " << reverseString(input) << endl;
    
    if (isPalindrome(input)) {
        cout << "3. The string is a palindrome." << endl;
    } else {
        cout << "3. The string is not a palindrome." << endl;
    }
    
    cout << "4. Number of vowels: " << countVowels(input) << endl;
    cout << "5. Number of words: " << countWords(input) << endl;
    
    return 0;
}