#include <iostream>

class ATM {
private:
    double balance;

public:
    // Constructor to initialize the balance
    ATM(double initialBalance) : balance(initialBalance) {}

    // Function to display the main menu
    void displayMenu() {
        std::cout << "ATM Menu:\n";
        std::cout << "1. Check Balance\n";
        std::cout << "2. Withdraw Money\n";
        std::cout << "3. Deposit Money\n";
        std::cout << "4. Exit\n";
    }

    // Function to check the account balance
    void checkBalance() {
        std::cout << "Your current balance is: $" << balance << "\n";
    }

    // Function to withdraw money
    void withdrawMoney(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "You have successfully withdrawn $" << amount << "\n";
            std::cout << "Remaining balance: $" << balance << "\n";
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds\n";
        }
    }

    // Function to deposit money
    void depositMoney(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "You have successfully deposited $" << amount << "\n";
            std::cout << "New balance: $" << balance << "\n";
        } else {
            std::cout << "Invalid deposit amount\n";
        }
    }
};

int main() {
    // Initialize ATM with an initial balance
    ATM myATM(1000.0);

    int choice;
    double amount;

    do {
        myATM.displayMenu();

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                myATM.checkBalance();
                break;
            case 2:
                std::cout << "Enter the amount to withdraw: $";
                std::cin >> amount;
                myATM.withdrawMoney(amount);
                break;
            case 3:
                std::cout << "Enter the amount to deposit: $";
                std::cin >> amount;
                myATM.depositMoney(amount);
                break;
            case 4:
                std::cout << "Exiting the ATM. Thank you!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}