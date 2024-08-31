#include <iostream>

int main() {
    double base;
    int exponent;
    double result = 1.0;
    std::cout << "Enter the base: ";
    std::cin >> base;
    
    std::cout << "Enter the exponent: ";
    std::cin >> exponent;
    for (int i = 0; i < exponent; ++i) {
        result *= base; 
    }
 
    std::cout << base << " raised to the power of " << exponent << " is " << result << ".\n";

    return 0;
}
