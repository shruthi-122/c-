#include <iostream>
using namespace std;
int addNumbers(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int sum = addNumbers(num1, num2);

    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}

