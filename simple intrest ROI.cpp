#include <iostream>
double calculateSimpleInterest(double principal, int time, bool isSeniorCitizen) {
    double rateOfInterest;
    if (isSeniorCitizen) {
        rateOfInterest = 12.0;
    } else {
        rateOfInterest = 10.0; 
    }

    double simpleInterest = (principal * rateOfInterest * time) / 100;
    return simpleInterest;
}

int main() {
    double principal;
    int time;
    char seniorCitizenInput;
    bool isSeniorCitizen;
    std::cout << "Enter the principal amount: ";
    std::cin >> principal;
    
    std::cout << "Enter the time (in years): ";
    std::cin >> time;

    std::cout << "Is the customer a senior citizen? (y/n): ";
    std::cin >> seniorCitizenInput;
    isSeniorCitizen = (seniorCitizenInput == 'y' || seniorCitizenInput == 'Y');

    double interest = calculateSimpleInterest(principal, time, isSeniorCitizen);
    std::cout << "The simple interest is: " << interest << std::endl;

    return 0;
}

