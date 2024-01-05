#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    
    Complex operator+(const Complex& other) const {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    
    void display() const {
        std::cout << "Result: " << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {

    Complex c1(2.5, 3.0);
    Complex c2(1.5, 2.5);

    
    Complex result = c1 + c2;

    
    result.display();

    return 0;
}

