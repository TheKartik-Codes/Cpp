#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

/*
Problem: Longest Substring Without Repeating Characters
Given a string s, find the length of the longest substring without repeating characters.

Example:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Constraints:
- 0 <= s.length <= 5 * 10^4
- s consists of English letters, digits, symbols, and spaces.
*/

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charIndex; // To store the last index of each character
    int maxLength = 0; // To store the maximum length of substring
    int start = 0; // Start of the current window

    for (int end = 0; end < s.length(); ++end) {
        char currentChar = s[end];

        // If the character is already in the map and its index is within the current window
        if (charIndex.find(currentChar) != charIndex.end() && charIndex[currentChar] >= start) {
            // Move the start of the window to the right of the last occurrence
            start = charIndex[currentChar] + 1;
        }

        // Update the last index of the current character
        charIndex[currentChar] = end;

        // Calculate the length of the current window and update maxLength
        maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int result = lengthOfLongestSubstring(s);
    cout << "The length of the longest substring without repeating characters is: " << result << endl;

    return 0;
}