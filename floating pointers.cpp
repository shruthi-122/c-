#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num;

    cout << "Enter a floating-point number: ";
    cin >> num;

    int roundedValue = (num - floor(num) < ceil(num) - num) ? floor(num) : ceil(num);

    cout << "Rounded value: " << roundedValue << endl;

    return 0;
}

