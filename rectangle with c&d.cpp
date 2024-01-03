#include <iostream>

class Rectangle {
public:

    Rectangle(double length, double width) : length(length), width(width) {
        std::cout << "Constructor called for Rectangle" << std::endl;
    }

    
    ~Rectangle() {
        std::cout << "Destructor called for Rectangle" << std::endl;
    }


    double calculateArea() {
        return length * width;
    }

private:
    double length;
    double width;
};

int main() {

    Rectangle myRectangle(5.0, 3.0);

    std::cout << "Area of the rectangle: " << myRectangle.calculateArea() << std::endl;

    return 0;
}

