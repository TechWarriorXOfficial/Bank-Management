# **Bank Management System in C++**

## **Overview**

This project is a simple Bank Management System built in C++. It simulates basic banking operations such as creating an account, depositing money, withdrawing money, and checking the balance.

## **Features**

- **Account Creation**: Initializes an account with a unique account number, account holder's name, and an initial balance.
- **Deposit Money**: Allows users to deposit money into their account.
- **Withdraw Money**: Facilitates money withdrawal from the account with sufficient balance checks.
- **Check Balance**: Displays the current balance of the account.
- **Account Details**: Shows the account holder's name, account number, and current balance.

## Screenshot

![Screenshot](https://github.com/user-attachments/assets/f28daa3c-e38e-49ac-91bb-7a554e44c078)

## **Getting Started**

### **Prerequisites**

- A C++ compiler (g++, MinGW, etc.)
- Basic understanding of C++ syntax and concepts.

### **Installation**

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/TechWarriorXOfficial/Bank-Management.git
   ```
2. **Compile and Run the Code**:

   **Using Visual Studio Code**:

   - Open the repository folder in Visual Studio Code.
   - Ensure you have the C++ extension installed (`ms-vscode.cpptools`).
   - Open a terminal in Visual Studio Code (`Ctrl+``).
   - Compile the code using the following command:
     ```bash
     g++ -o BankManagement BankManagement.cpp
     ```
   - Run the compiled program:
     ```bash
     ./BankManagement
     ```

   **Using Visual Studio**:

   - Open Visual Studio and create a new project.
   - Choose **"Console App"** from the project templates.
   - Add the `BankManagement.cpp` file to the project.
   - Build the project by selecting **"Build"** from the top menu or pressing `Ctrl+Shift+B`.
   - Run the program by selecting **"Start Debugging"** from the top menu or pressing `F5`.

## **Usage**

After running the program, a menu will appear with options to view account details, deposit money, withdraw money, check the balance, or exit the program. Simply enter the corresponding number to perform the desired operation.

---

### **How to Use**

1. **Creating an Account**: When the program starts, a default account is created. You can modify the code to allow multiple accounts if needed.
2. **Depositing Money**: Choose the option to deposit money and enter the amount.
3. **Withdrawing Money**: Choose the option to withdraw money and enter the amount, ensuring it doesn't exceed the current balance.
4. **Checking Balance**: Choose the option to view the current balance of the account.
5. **Exiting the Program**: Select the exit option to close the application.
