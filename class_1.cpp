// A program to demonstrate the use of a date class in C++  

#include <iostream> // Include the library for input and output operations
using namespace std; // Use the standard namespace to avoid writing std:: repeatedly

// Definition of the Date class
class Date {
private:
    int Year;  // Data member to store the year
    int Month; // Data member to store the month
    int Day;   // Data member to store the day

public:
    // Member function to get data from the user
    void getData(int y, int m, int d) {
        Year = y;   // Assign the input year to the Year data member
        Month = m;  // Assign the input month to the Month data member
        Day = d;    // Assign the input day to the Day data member
    }

    // Member function to display the date
    void showDate() {
        cout << "Date: " << Year << "-" << Month << "-" << Day << endl;
        // Display the date in the format Year-Month-Day
    }
};

// Main function to demonstrate the use of the Date class
int main() {
    Date myDate; // Create an object of the Date class

    int year, month, day; // Variables to store user input

    // Ask the user to enter the date
    cout << "Enter year: ";
    cin >> year; // Take input for the year
    cout << "Enter month: ";
    cin >> month; // Take input for the month
    cout << "Enter day: ";
    cin >> day; // Take input for the day

    // Set the date in the object using the getData function
    myDate.getData(year, month, day);

    // Display the date using the showDate function
    myDate.showDate();

    return 0; // Indicate that the program ended successfully
}