#include <iostream>

class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle(int l, int w) : length(l), width(w) {}

    void setDimensions(int l, int w) {
        this->length = l;
        this->width = w;
    }
    int area() const {
        return this->length * this->width;
    }
    void displayDimensions() const {
        std::cout << "Length: " << this->length << ", Width: " << this->width << "\n";
    }
};
int main() {
    Rectangle rect(10, 5);
    rect.displayDimensions();
    rect.setDimensions(7, 3);
    rect.displayDimensions();
    std::cout << "Area: " << rect.area() << std::endl;

    return 0;
}

