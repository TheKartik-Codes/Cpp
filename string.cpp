#include <iostream>
#include <string> // Include the string library
using namespace std;

int main() {
    // 1. Creating and initializing strings
    string str1 = "Hello";
    string str2 = "World";
    string str3;

    // 2. Concatenation
    str3 = str1 + " " + str2;
    cout << "Concatenated string: " << str3 << endl;

    // 3. Accessing characters
    cout << "First character of str1: " << str1[0] << endl;

    // 4. Modifying characters
    str1[0] = 'h';
    cout << "Modified str1: " << str1 << endl;

    // 5. String length
    cout << "Length of str3: " << str3.length() << endl;

    // 6. Substring
    cout << "Substring of str3 (from index 6): " << str3.substr(6) << endl;

    // 7. Finding a character or substring
    size_t pos = str3.find("World");
    if (pos != string::npos) {
        cout << "'World' found at index: " << pos << endl;
    } else {
        cout << "'World' not found" << endl;
    }

    // 8. Comparing strings
    if (str1 == "hello") {
        cout << "str1 is equal to 'hello'" << endl;
    } else {
        cout << "str1 is not equal to 'hello'" << endl;
    }

    // 9. Clearing a string
    str3.clear();
    cout << "After clearing, str3 is: '" << str3 << "'" << endl;

    // 10. Checking if a string is empty
    if (str3.empty()) {
        cout << "str3 is empty" << endl;
    }

    return 0;
}