#include <iostream>
#include <string>

class StringConverter {
public:
    std::string toUpperCase(std::string str) {
        for (char &c : str) c = toupper(c);
        return str;
    }

    std::string toLowerCase(std::string str) {
        for (char &c : str) c = tolower(c);
        return str;
    }
};

int main() {
    StringConverter converter;
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << "Uppercase: " << converter.toUpperCase(input) << std::endl;
    std::cout << "Lowercase: " << converter.toLowerCase(input) << std::endl;

    return 0;
}

