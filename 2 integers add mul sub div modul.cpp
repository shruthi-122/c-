#include <iostream>
using namespace std;
int main() {
    int num1, num2;

   cout << "Enter two integers: ";
   cin >> num1 >> num2;

    cout << "Addition: " << num1 + num2 << std::endl;
    cout << "Subtraction: " << num1 - num2 << std::endl;
    cout << "Multiplication: " << num1 * num2 << std::endl;
    cout << "Division: " << num1 / num2 << std::endl;
    cout << "Modulo: " << num1 % num2 << std::endl;

    return 0;
}

