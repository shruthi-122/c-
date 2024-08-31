#include <iostream>
#include <cmath> 
bool isPrime(int number) {
    if (number <= 1) return false;
    if (number <= 3) return true;
    if (number % 2 == 0 || number % 3 == 0) return false;
    for (int i = 5; i <= std::sqrt(number); i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) return false;
    }

    return true;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " is a Prime number." << std::endl;
    } else {
        std::cout << number << " is not a Prime number." << std::endl;
    }

    return 0;
}

