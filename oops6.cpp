#include <iostream>
#include <string>
using namespace std;

class Hotel {
private:
    int Rno; 
    string Name; 
    float Tariff; 
    int NOD; 

    float CALC() {
        float amount = NOD * Tariff;
        if (amount > 10000) {
            amount *= 1.05;
        }
        return amount;
    }

public:
    void Checkin() {
        cout << "Enter Room Number: ";
        cin >> Rno;
        cout << "Enter Customer Name: ";
        cin.ignore();
        getline(cin, Name);
        cout << "Enter Tariff per day: ";
        cin >> Tariff;
        cout << "Enter Number of Days of Stay: ";
        cin >> NOD;
    }

    void Checkout() {
        cout << "Room Number: " << Rno << endl;
        cout << "Customer Name: " << Name << endl;
        cout << "Tariff per day: " << Tariff << endl;
        cout << "Number of Days of Stay: " << NOD << endl;
        cout << "Total Amount: " << CALC() << endl;
    }
};

int main() {
    Hotel h;
    h.Checkin();
    h.Checkout();
    return 0;
}