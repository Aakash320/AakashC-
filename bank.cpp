#include <iostream>
#include <vector>
#include <exception>
using namespace std;

class InsufficientBalance : public exception {
public:
    const char* what() const noexcept override {
        return "Insufficient balance for the transaction";
    }
};

class bank {
private:
    int accno;
    int balance;
    string userid;
    string pass;
public:
    bank(string userid, string pass, int accno, int balance) {
        this->userid = userid;
        this->pass = pass;
        this->accno = accno;
        this->balance = balance;
    }
    void getdetails() {
        cout << "User ID = " << this->userid << endl;
        cout << "Account No = " << this->accno << endl;
        cout << "Balance = " << this->balance << endl;
    }
    string getUserid() {
        return userid;
    }
    string getPass() {
        return pass;
    }
    int getBalance() {
        return balance;
    }

    // Transfer money function
    void transferMoney(int amount) {
        if (amount <= 0) {
            cout << "Invalid amount. Transaction failed.\n";
            return;
        }
        if (balance < amount) {
            throw InsufficientBalance();
        }
        balance -= amount;
        cout << amount << " transferred successfully" << endl;
    }
};

int main() {
    vector<bank> v;
    int choice;

    while(1)
    {
        cout << "Enter 1 to create an account\n";
        cout<< "Enter 2 to login\n";
        cout << "Enter 3 to exit\n";
        cout<< "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: {
                int accno, balance;
                string userid, pass, temp;
                cout << "Create your User ID: ";
                cin >> userid;


                bool userExists = false;
                for (int i = 0; i < v.size(); i++) {
                    if (v[i].getUserid() == userid) {
                        userExists = true;
                        break;
                    }
                }
                if (userExists) {
                    cout << "User ID already exists. Please choose a different one.\n";
                    break;
                }

                cout << "Create your Password: ";
                cin >> pass;
                cout << "Confirm Password: ";
                cin >> temp;

                if (temp != pass) {
                    cout << "Passwords do not match. Try again.\n";
                    cout << "Create your Password: ";
                    cin >> pass;
                    cout << "Confirm Password: ";
                    cin >> temp;
                }
                cout << "Enter Account Number: ";
                cin >> accno;


                do {
                    cout << "Enter Initial Balance: ";
                    cin >> balance;
                    if (balance < 0) {
                        cout << "Initial balance cannot be negative. Please enter again.\n";
                    }
                } while (balance < 0);

                bank obj(userid, pass, accno, balance);
                v.push_back(obj);
                cout << "Account created successfully!\n";
                break;
            }
            case 2: {
                string id, pass;
                cout << "Enter User ID: ";
                cin >> id;
                cout << "Enter Password: ";
                cin >> pass;
                int idx = -1;
                for (int i = 0; i < v.size(); i++) {
                    if (v[i].getUserid() == id && v[i].getPass() == pass) {
                        idx = i;
                        break;
                    }
                }
                if (idx == -1) {
                    cout << "No account found.\n";
                } else {
                    cout << "Login successful!\n";

                    int c;
                    do {
                        cout << "\nEnter 1 to show balance\n"
                             << "Enter 2 to transfer money\n"
                             << "Enter 3 to exit\n"
                             << "Enter your choice: ";
                        cin >> c;

                        if (c == 1) {
                            cout << "Your balance: " << v[idx].getBalance() << endl;
                        }
                        else if (c == 2) {
                            int amount;
                            cout << "Enter amount to transfer: ";
                            cin >> amount;
                            try {
                                v[idx].transferMoney(amount);
                            } catch (const InsufficientBalance& e) {
                                cout << e.what() << endl;
                            }
                        }

                    } while(c != 3);
                }
                break;
            }
            case 3: {
                cout << "Exiting..\n";
                return 0;
            }
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }
    return 0;
}