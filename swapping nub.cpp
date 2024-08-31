#include <iostream>
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Inside swapByValue function: a = " << a << ", b = " << b << std::endl;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 10, num2 = 20;

    std::cout << "Before swapping (by value): num1 = " << num1 << ", num2 = " << num2 << std::endl;
    swapByValue(num1, num2);
    std::cout << "After swapping (by value): num1 = " << num1 << ", num2 = " << num2 << std::endl;

    std::cout << "Before swapping (by reference): num1 = " << num1 << ", num2 = " << num2 << std::endl;
    swapByReference(num1, num2);
    std::cout << "After swapping (by reference): num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}

