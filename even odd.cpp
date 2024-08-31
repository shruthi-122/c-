#include <iostream>

class NumberChecker {
public:
    std::string checkEvenOdd(int num) {
        return (num % 2 == 0) ? "Even" : "Odd";
    }
};

int main() {
    NumberChecker checker;
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "The number is " << checker.checkEvenOdd(number) << "." << std::endl;

    return 0;
}

