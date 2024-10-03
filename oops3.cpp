#include <iostream>
#include <string>

class NonRepeatingFinder {
public:
    NonRepeatingFinder(const std::string& str) : input(str) {}

    void setInput(const std::string& str) {
        input = str;
    }

    std::string getNonRepeatingChars() const {
        std::string result;
        for (size_t i = 0; i < input.length(); ++i) {
            bool isUnique = true;
            for (size_t j = 0; j < input.length(); ++j) {
                if (i != j && input[i] == input[j]) {
                    isUnique = false;
                    break;
                }
            }
            if (isUnique) {
                result += input[i];
            }
        }
        return result;
    }

private:
    std::string input;
};

int main() {
    std::string input;
    std::cout << "Enter the string: ";
    std::getline(std::cin, input);

    NonRepeatingFinder finder(input);
    std::string nonRepeatingChars = finder.getNonRepeatingChars();

    std::cout << "Non-repeating characters: " << nonRepeatingChars << std::endl;

    return 0;
}
