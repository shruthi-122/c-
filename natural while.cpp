#include <iostream>

int main() {
    int n;
    
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int sum = 0;
      
    if (n <= 0) {
        std::cout << "The value of n should be a positive integer." << std::endl;
        return 1; 
    }
   
    int i = 0;
    
    std::cout << "Enter the numbers: ";
    while (i < n) {
        int num;
        std::cin >> num; 
        sum += num;     
        ++i;            
    }
    
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
