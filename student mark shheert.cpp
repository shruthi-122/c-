#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    std::string regNo;
    float mark1, mark2, mark3;
    float average;
    char grade;
    void calculateGrade() {
        average = (mark1 + mark2 + mark3) / 3.0;

        if (average > 90) {
            grade = 'S';
        } else if (average > 80) {
            grade = 'A';
        } else if (average > 70) {
            grade = 'C';
        } else if (average > 60) {
            grade = 'D';
        } else if (average > 50) {
            grade = 'E';
        } else {
            grade = 'F';
        }
    }

public:
    void input() {
        std::cout << "Enter Name: ";
        std::getline(std::cin, name);
        std::cout << "Enter Registration Number: ";
        std::getline(std::cin, regNo);
        std::cout << "Enter marks for Subject 1: ";
        std::cin >> mark1;
        std::cout << "Enter marks for Subject 2: ";
        std::cin >> mark2;
        std::cout << "Enter marks for Subject 3: ";
        std::cin >> mark3;

        std::cin.ignore();
        calculateGrade();
    }

    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Registration Number: " << regNo << std::endl;
        std::cout << "Marks: " << mark1 << ", " << mark2 << ", " << mark3 << std::endl;
        std::cout << "Average: " << average << std::endl;
        std::cout << "Grade: " << grade << std::endl;
    }
};

int main() {
    const int numStudents = 10;
    Student students[numStudents];
    for (int i = 0; i < numStudents; i++) {
        std::cout << "Enter details for Student " << i + 1 << ":\n";
        students[i].input();
        std::cout << std::endl;
    }

    for (int i = 0; i < numStudents; i++) {
        std::cout << "Details of Student " << i + 1 << ":\n";
        students[i].display();
        std::cout << std::endl;
    }

    return 0;
}

