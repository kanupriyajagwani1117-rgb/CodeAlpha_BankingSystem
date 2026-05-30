#include<iostream>
using namespace std;

class Bank {
    float balance;

public:
    void getBalance() {
        cout << "Enter your current balance: Rs = ";
        cin >> balance;
    }

    void deposit() {
        float amount;
        cout << "Enter amount to deposit: Rs = ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: Rs = ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
    }

    void showBalance() {
        cout << "Updated Balance: Rs = " << balance << endl;
    }
};

int main() {
    Bank account;
    int choice;

    account.getBalance();

    cout << "\nSelect an operation:\n";
    cout << "1. Deposit Money\n";
    cout << "2. Withdraw Money\n";
    cout << "3. Do Nothing (Just show balance)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            account.deposit();
            break;
        case 2:
            account.withdraw();
            break;
        case 3:
            cout << "No transaction performed.\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }

    account.showBalance();
    return 0;
}
