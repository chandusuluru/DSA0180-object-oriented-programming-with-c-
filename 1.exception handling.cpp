#include <iostream>
double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Division by zero is not allowed");
    }
    return numerator / denominator;
}
int main() {
    double numerator, denominator;
    std::cout << "Enter numerator: ";
    std::cin >> numerator;
    std::cout << "Enter denominator: ";
    std::cin >> denominator;
    try {
        double result = divide(numerator, denominator);
        std::cout << "Result of division: " << result << std::endl;
    } catch (const std::exception& ex) {
        std::cerr << "Exception caught: " << ex.what() << std::endl;
    }

    return 0;
}

