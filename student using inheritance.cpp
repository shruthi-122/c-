#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    void input() {
        std::cout << "Enter name: ";
        std::getline(std::cin, name);
        std::cout << "Enter age: ";
        std::cin >> age;
        std::cin.ignore(); // Clear newline character
    }

    void print() {
        std::cout << "Name: " << name << ", Age: " << age << "\n";
    }
};

class Student : public Person {
public:
    int studentID;

    void input() {
        Person::input();
        std::cout << "Enter student ID: ";
        std::cin >> studentID;
    }

    void print() {
        Person::print();
        std::cout << "Student ID: " << studentID << "\n";
    }
};

int main() {
    Student student;
    student.input();
    student.print();
    return 0;
}

