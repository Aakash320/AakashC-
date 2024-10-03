#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName; 
    int accountNumber; 
    string accountType; 
    float balance; 

public:
    void initialize(string name, int accNumber, string accType, float initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully. New balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    void display() const {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Balance: " << balance << endl;
        cout << "account type: " << accountType << endl;
    }
};

int main() {
    BankAccount account;
    string name, accType;
    int accNumber, initialBalance;
    cout<<"Enter Name: ";
    getline(cin, name);
    cout<<"Enter account number: ";
    cin>>accNumber;
    cout<<"Enter account type: ";
    cin.ignore();
    getline(cin, accType);
    cout<<"Enter initial balance: ";
    cin>>initialBalance;
    account.initialize(name, accNumber, accType, initialBalance);
    int d, w;
    cout<<"Enter amount to deposit: ";
    cin>>d;
    cout<<"Enter amount to withdraw: ";
    cin>>w;
    account.deposit(d);
    account.withdraw(w);
    account.display();
    return 0;
}