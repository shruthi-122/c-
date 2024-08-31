#include <iostream>

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius;

    // Input temperature in Celsius
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    // Convert to Fahrenheit using the function
    double fahrenheit = celsiusToFahrenheit(celsius);

    // Output the result
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}

