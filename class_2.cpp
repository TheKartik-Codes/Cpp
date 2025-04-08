#include <iostream> // Include the library for input and output operations
#include <string>   // Include the library to use strings
using namespace std; // Use the standard namespace to avoid writing std:: repeatedly

// Definition of the BankAccount class
class BankAccount {
private:
    int accountNumber;       // Data member to store the account number
    string accountHolder;    // Data member to store the name of the account holder
    string accountType;      // Data member to store the type of account (e.g., Savings, Current)
    double balance;          // Data member to store the balance amount in the account

public:
    // Member function to assign initial values
    void assignInitialValues(int accNo, string name, string type, double initialBalance) {
        accountNumber = accNo;       // Assign the account number
        accountHolder = name;        // Assign the account holder's name
        accountType = type;          // Assign the account type
        balance = initialBalance;    // Assign the initial balance
    }

    // Member function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) { // Check if the deposit amount is positive
            balance += amount; // Add the deposit amount to the balance
            cout << "Amount deposited successfully. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Member function to withdraw an amount
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) { // Check if the withdrawal amount is valid
            balance -= amount; // Subtract the withdrawal amount from the balance
            cout << "Amount withdrawn successfully. Remaining balance: " << balance << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    // Member function to display account information
    void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Main function to demonstrate the use of the BankAccount class
int main() {
    BankAccount account; // Create an object of the BankAccount class
    int choice;          // Variable to store the user's menu choice

    // Assign initial values to the account
    account.assignInitialValues(12345, "John Doe", "Savings", 1000.0);

    // Menu-driven program
    do {
        cout << "\n--- Bank Account Menu ---" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Account Information" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            double depositAmount;
            cout << "Enter amount to deposit: ";
            cin >> depositAmount;
            account.deposit(depositAmount);
            break;
        }
        case 2: {
            double withdrawAmount;
            cout << "Enter amount to withdraw: ";
            cin >> withdrawAmount;
            account.withdraw(withdrawAmount);
            break;
        }
        case 3:
            account.displayAccountInfo();
            break;
        case 4:
            cout << "Exiting program. Thank you!" << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0; // Indicate that the program ended successfully
}