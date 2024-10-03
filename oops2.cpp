#include <iostream>
#include <string>
using namespace std;

class StringModifier {
private:
    string str;

public:
    StringModifier(string input) {
        str = input;
    }
    void removeCharacter(char ch) {
        string result = "";
        for (char c : str) {
            if (c != ch) {
                result += c;
            }
        }        
        str = result;
    }
    string getString() {
        return str;
    }
};

int main() {
    string inputString;
    char charToRemove;
    cout << "Enter a string: ";
    getline(cin, inputString);
    StringModifier modifier(inputString);
    cout << "Enter the character to remove: ";
    cin >> charToRemove;
    modifier.removeCharacter(charToRemove);
    cout << "Updated string: " << modifier.getString() << endl;
    return 0;
}