#include <iostream>
#include <string>
inline bool isPalindrome(const std::string& str) {
    int length = str.length();
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;
    char choice;
    std::cout << "Do you want to check if a string is a palindrome? (y/n): ";
    std::cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        std::cout << "Enter the string: ";
        std::cin >> input;
        if (isPalindrome(input)) {
            std::cout << "\"" << input << "\" is a palindrome." << std::endl;
        } else {
            std::cout << "\"" << input << "\" is not a palindrome." << std::endl;
        }
    } else {
        std::cout << "You chose not to check for a palindrome." << std::endl;
    }

    return 0;
}

