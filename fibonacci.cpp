#include <iostream>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;  
    } else if (n == 1) {
        return 1;  
    } else {
        int a = 0, b = 1, fib = 0;
        for (int i = 2; i <= n; i++) {
            fib = a + b;  
            a = b;       
            b = fib;
        }
        return fib;
    }
}

int main() {
    int n;

    std::cout << "Enter the position (N) to find the Nth Fibonacci number: ";
    std::cin >> n;

    int result = fibonacci(n);
    std::cout << "The " << n << "th Fibonacci number is: " << result << std::endl;

    return 0;
}

