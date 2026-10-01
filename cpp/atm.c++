#include <iostream>
using namespace std;

int main() {
    int pin = 1122, userPin;
    int balance = 50000;
    int choice, amount;

    cout << "===== ATM MACHINE =====\n";
    cout << "Enter your PIN: ";
    cin >> userPin;

    if (userPin != pin) {
        cout << "Incorrect PIN! Access Denied.";
        return 0;
    }

    cout << "Login Successful!\n\n";

 
    while (true) {
        cout << "\n ==== MENU ==== \n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Your Balance: Rs. " << balance << endl;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount > 0) {
                balance += amount;
                cout << "Amount Deposited Successfully!\n";
            } else {
                cout << "Invalid Amount!\n";
            }
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= 0) {
                cout << "Invalid amount!\n";
            } else if (amount > balance) {
                cout << "Insufficient Balance!\n";
            } else {
                balance -= amount;
                cout << "Withdrawal Successful!\n";
            }
            break;

        case 4:
            cout << "Thank you for using ATM!";
            return 0; // exit program

        default:
            cout << "Invalid Choice! Try again.\n";
            continue; // skip to next iteration
        }
    }

    return 0;
}
