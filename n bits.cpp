#include <iostream>
#include <cmath> 

int main() {
    unsigned int number, N;
    std::cout << "Enter the number: ";
    std::cin >> number;
    std::cout << "Enter the position N of the bit to set (0-based index): ";
    std::cin >> N;
    if (N < 0) {
        std::cout << "Bit position must be a non-negative integer.\n";
        return 1; 
    }
    unsigned int mask = 1 << N;
    number |= mask;
    std::cout << "The number after setting the " << N << "th bit is: " << number << "\n";
    return 0;
}
