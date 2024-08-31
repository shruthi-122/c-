#include <iostream>
#include <string>
void displayName(std::string name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    displayName(name);
    return 0;
}

