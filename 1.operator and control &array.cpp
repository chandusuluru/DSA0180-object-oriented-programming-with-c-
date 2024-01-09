#include <iostream>
int main() {
    int num1, num2;
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    if (num2 != 0) {
        int quotient = num1 / num2;
        int remainder = num1 % num2;
        std::cout << "Sum: " << sum << std::endl;
        std::cout << "Difference: " << difference << std::endl;
        std::cout << "Product: " << product << std::endl;
        std::cout << "Quotient: " << quotient << std::endl;
        std::cout << "Remainder: " << remainder << std::endl;
    } else {
        std::cerr << "Error: Division by zero is not allowed." << std::endl;
    }

    return 0;
}

