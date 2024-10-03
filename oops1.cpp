#include <iostream>
using namespace std;

class ElectricityBill {
    string name;
    int units;
    float bill;

public:
    void inputDetails() {
        cout<<"Enter user name: ";
        cin>>name;
        cout<<"Enter the number of units consumed: ";
        cin>>units;
    }

    void calculateBill() {
        if (units <= 100) {
            bill = units * 0.60;
        } else if (units <= 300) {
            bill = (100 * 0.60) + ((units - 100) * 0.80);
        } else {
            bill = (100 * 0.60) + (200 * 0.80) + ((units - 300) * 0.90);
        }

        if (bill < 50) {
            bill = 50;
        }

        if (bill > 300) {
            bill += (0.15 * bill);
        }
    }

    void displayBill() {
        cout<<"User: "<<name<<endl<<"Units Consumed: "<<units<<endl<<"Total Charges: Rs ";
        printf("%f\n", bill);
    }
};

int main() {
    ElectricityBill user;
    char choice;

    do {
        user.inputDetails();
        user.calculateBill();
        user.displayBill();
        cout<<"Do you want to enter details for another user? (y/n): ";
        cin>>choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
