#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    cout << "Division: " << num1 / num2 << endl;
    cout << "there will be no modulo for floated numbers";

    return 0;
}

