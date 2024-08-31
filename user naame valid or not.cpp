#include <iostream>
#include <cctype> 
bool isValidUsername(const std::string& username) {
    if (username.empty()) return false;

    for (char c : username) {
        if (!isalnum(c)) return false;
    }

    return true;
}

int main() {
    std::string username;

    std::cout << "Enter your username: ";
    std::getline(std::cin, username);

    if (isValidUsername(username)) {
        std::cout << "Valid username." << std::endl;
    } else {
        std::cout << "Invalid username." << std::endl;
    }

    return 0;
}

