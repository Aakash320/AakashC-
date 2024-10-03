#include <iostream>
using namespace std;

class TollBooth {
private:
    unsigned int totalCars;
    double totalCash;

public:
    TollBooth() : totalCars(0), totalCash(0.0) {}

    void payingCar() {
        totalCars++;
        totalCash += 0.50;
    }

    void nonPayCar() {
        totalCars++;
    }

    void display() const {
        cout << "Total cars: " << totalCars << endl;
        cout << "Total cash: $" << totalCash << endl;
    }
};

int main() {
    TollBooth booth;
    char choice;

    cout << "TollBooth Simulation" << endl;
    cout << "Enter 'p' for paying car, 'n' for non-paying car, and 'e' to exit and display totals." << endl;

    while (true) {
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 'e' || choice == 'E') {
            cout << "\nExiting...\n";
            booth.display();
            break;
        } else if (choice == 'p' || choice == 'P') {
            booth.payingCar();
            cout << "Paying car registered." << endl;
        } else if (choice == 'n' || choice == 'N') {
            booth.nonPayCar();
            cout << "Non-paying car registered." << endl;
        } else {
            cout << "Invalid input! Please enter 'p', 'n', or 'e'." << endl;
        }
    }

    return 0;
}
