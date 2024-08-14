#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor to initialize a new account
    BankAccount(int accNum, string accName, double initialBalance) {
        accountNumber = accNum;
        accountHolderName = accName;
        balance = initialBalance;
    }

    // Function to display account details
    void displayAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: $" << balance << endl;
        }
        else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: $" << balance << endl;
        }
        else {
            cout << "Invalid withdrawal amount or insufficient funds!" << endl;
        }
    }

    // Function to check the balance
    double checkBalance() {
        return balance;
    }
};

int main() {
    int choice;
    BankAccount myAccount(123456, "John Doe", 1000.00);

    do {
        // Displaying menu options
        cout << "\n*** Bank Management System ***\n";
        cout << "1. View Account Details\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            myAccount.displayAccountDetails();
            break;
        case 2: {
            double depositAmount;
            cout << "Enter amount to deposit: $";
            cin >> depositAmount;
            myAccount.deposit(depositAmount);
            break;
        }
        case 3: {
            double withdrawAmount;
            cout << "Enter amount to withdraw: $";
            cin >> withdrawAmount;
            myAccount.withdraw(withdrawAmount);
            break;
        }
        case 4:
            cout << "Current balance: $" << myAccount.checkBalance() << endl;
            break;
        case 5:
            cout << "Exiting the system. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
