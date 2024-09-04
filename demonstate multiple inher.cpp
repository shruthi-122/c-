#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    void setPersonDetails(std::string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() const {
        std::cout << "Name: " << name << ", Age: " << age << "\n";
    }
};

class Employee {
public:
    int employeeID;
    std::string department;

    void setEmployeeDetails(int id, std::string dept) {
        employeeID = id;
        department = dept;
    }

    void displayEmployeeDetails() const {
        std::cout << "Employee ID: " << employeeID << ", Department: " << department << "\n";
    }
};

class Manager : public Person, public Employee {
public:
    void setManagerDetails(std::string n, int a, int id, std::string dept) {
        setPersonDetails(n, a);
        setEmployeeDetails(id, dept);
    }

    void displayManagerDetails() const {
        displayPersonDetails();
        displayEmployeeDetails();
    }
};

int main() {
    Manager mgr;
    mgr.setManagerDetails("John Doe", 35, 1001, "Finance");
    mgr.displayManagerDetails();
    return 0;
}

