#include <iostream>
using namespace std;

class SavingsAccount {
private:
    double sb;
    static double AIRate;
    public:
    SavingsAccount(double balance) {
        sb = balance;
    }   
    
    void calculateMonthlyInterest(){
        double mi=(sb*AIRate)/12;
        sb+=mi;
    }

    static void modifyInterestRate(double newRate) {
        AIRate = newRate;
    }

    void displayBalance() {
        cout << "Current Balance: Rs " << sb << endl;
    }
};
double SavingsAccount::AIRate = 0.0;
int main() {
    
    SavingsAccount s1(2000.00);
    SavingsAccount s2(3000.00);

    SavingsAccount::modifyInterestRate(0.04);

    s1.calculateMonthlyInterest();
    s2.calculateMonthlyInterest();
    
    cout << "Balances after applying 4% interest for one month:" << endl;
    cout << "Saver 1: "; 
    s1.displayBalance();
    cout << "Saver 2: "; 
    s2.displayBalance();

    SavingsAccount::modifyInterestRate(0.05);

    s1.calculateMonthlyInterest();
    s2.calculateMonthlyInterest();

    cout << "\nBalances after applying 5% interest for one month:" << endl;
    cout << "Saver 1 ";
    s1.displayBalance();
    cout << "Saver 2 ";
    s2.displayBalance();
    return 0;
}
