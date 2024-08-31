#include <iostream>

bool isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPalindrome(number)) {
        std::cout << number << " is a Palindrome number." << std::endl;
    } else {
        std::cout << number << " is not a Palindrome number." << std::endl;
    }

    return 0;
}

