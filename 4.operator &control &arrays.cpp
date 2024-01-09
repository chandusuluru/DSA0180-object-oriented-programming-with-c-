#include <iostream>
int main() {
    double num1, num2;
    std::cout << "Enter the first floating-point number: ";
    std::cin >> num1;

    std::cout << "Enter the second floating-point number: ";
    std::cin >> num2;
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;

    if (num2 != 0.0) {
        double quotient = num1 / num2;
        std::cout << "Sum: " << sum << std::endl;
        std::cout << "Difference: " << difference << std::endl;
        std::cout << "Product: " << product << std::endl;
        std::cout << "Quotient: " << quotient << std::endl;
    } else {
    
        std::cerr << "Error: Division by zero is not allowed." << std::endl;
    }

    return 0;
}

