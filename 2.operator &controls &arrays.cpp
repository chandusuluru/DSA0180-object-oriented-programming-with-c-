#include <iostream>

int main() {
    int num1, num2, num3;
    double average;
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    std::cout << "Enter the third integer: ";
    std::cin >> num3;
    average = (num1 + num2 + num3) / 3.0;
    std::cout << "The average of the three numbers is: " << average << std::endl;

    return 0;
}

