#include <iostream>
void checkEligibility(int age) {
    const int votingAge = 18;

    if (age >= votingAge) {
        std::cout << "You are eligible to vote." << std::endl;
    } else {
        int yearsLeft = votingAge - age;
        std::cout << "You are not eligible to vote. You have " << yearsLeft << " years left to be eligible." << std::endl;
    }
}

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    checkEligibility(age);

    return 0;
}

