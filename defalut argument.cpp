#include <iostream>
using namespace std;
int add(int a, int b = 10, int c = 20) {
    return a + b + c;
}

int main() {
    cout << "Sum with all default values: " << add(5) << std::endl;
    cout << "Sum with one default value: " << add(5, 15) << std::endl;
    cout << "Sum with no default values: " << add(5, 15, 25) << std::endl;

    return 0;
}

