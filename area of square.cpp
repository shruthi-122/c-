#include <iostream>
#include <cmath>

class Shape {
public:
    
    virtual double area() const = 0;
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double area() const override {
        return side * side;
    }
};
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    Shape* square = new Square(5.0);
    Shape* circle = new Circle(3.0);

    std::cout << "Area of square: " << square->area() << std::endl;
    std::cout << "Area of circle: " << circle->area() << std::endl;

    delete square;
    delete circle;

    return 0;
}

