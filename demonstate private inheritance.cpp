#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    void setPersonDetails(std::string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() const {
        std::cout << "Name: " << name << ", Age: " << age << "\n";
    }
};

class Student : private Person {
private:
    int studentID;

public:
    void setStudentDetails(std::string n, int a, int id) {
        setPersonDetails(n, a);
        studentID = id;
    }

    void displayStudentDetails() const {
        displayPersonDetails();
        std::cout << "Student ID: " << studentID << "\n";
    }
};

int main() {
    Student student;
    student.setStudentDetails("Alice", 20, 12345);
    student.displayStudentDetails();
    return 0;
}

