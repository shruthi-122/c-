#include <iostream>
 
int addNumbers(int a, int b = 10, int c = 20) {
    return a + b + c;
}

int main() {
    std::cout << "Sum (with all arguments): " << addNumbers(5, 15, 25) << std::endl;
    std::cout << "Sum (with two arguments): " << addNumbers(5, 15) << std::endl;
    std::cout << "Sum (with one argument): " << addNumbers(5) << std::endl;

    return 0;
}

