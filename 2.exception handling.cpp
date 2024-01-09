#include <iostream>
#include <stdexcept>
double calculateResult(int option, double numerator, double denominator) {
    switch (option) {
        case 1:
            if (denominator == 0) {
                throw std::runtime_error("Division by zero is not allowed");
            }
            return numerator / denominator;
        case 2:
            int array[5] = {1, 2, 3, 4, 5};
            return array[10];
        default:
            throw std::invalid_argument("Invalid option");
    }
}
int main() {
    double numerator, denominator;
    int option;
    std::cout << "Enter numerator: ";
    std::cin >> numerator;
    std::cout << "Enter denominator: ";
    std::cin >> denominator;
    std::cout << "Choose an option (1, 2): ";
    std::cin >> option;
    try {
        double result = calculateResult(option, numerator, denominator);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::runtime_error& ex) {
        std::cerr << "Runtime Error: " << ex.what() << std::endl;
    } catch (const std::out_of_range& ex) {
        std::cerr << "Out of Range Error: " << ex.what() << std::endl;
    } catch (const std::invalid_argument& ex) {
        std::cerr << "Invalid Argument Error: " << ex.what() << std::endl;
    } catch (...) {
        std::cerr << "Unexpected Error occurred" << std::endl;
    }
    return 0;
}

