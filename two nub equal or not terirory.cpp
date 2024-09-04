#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << ((num1 == num2) ? "Equal" : "Not Equal") << endl;

    return 0;
}

