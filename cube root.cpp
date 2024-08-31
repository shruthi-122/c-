#include <iostream>
#include <cmath>

int main() {
    double number, cubeRoot;
    
    std::cout << "Enter a number: ";
    std::cin >> number;

    cubeRoot = cbrt(number);

    if (floor(cubeRoot) == cubeRoot) {
        std::cout << "The cube root of " << number << " is " << cubeRoot << " and it is  a perfect cube." << std::endl;
    } else {
        std::cout << "The cube root of " << number << " is " << cubeRoot << " and it is not a perfect cube." << std::endl;
    }

    return 0;
}

