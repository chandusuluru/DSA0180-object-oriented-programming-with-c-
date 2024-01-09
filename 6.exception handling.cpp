#include <iostream>
#include <stdexcept>
void innerFunction(int value) {
    if (value < 0) {
        throw std::invalid_argument("Negative value not allowed");
    }
    std::cout << "Inner function executed with value: " << value << std::endl;
}
void outerFunction(int value) {
    try {
        innerFunction(value);
    } catch (const std::invalid_argument& ex) {
        std::cerr << "Caught innerFunction exception: " << ex.what() << std::endl;
        throw std::runtime_error("Exception in outerFunction: " + std::string(ex.what()));
    }
}
int main() {
    int userValue;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> userValue;

    try {
        outerFunction(userValue);
    } catch (const std::runtime_error& ex) {
        std::cerr << "Caught outerFunction exception: " << ex.what() << std::endl;
    } catch (...) {
        std::cerr << "Unexpected Error occurred" << std::endl;
    }
    return 0;
}

