#include <iostream>
#include <stdexcept>
class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "This is a custom exception!";
    }
};
void myFunction(int value) {
    if (value < 0) {
        throw MyException();
    }
    std::cout << "Value is: " << value << std::endl;
}
int main() {
    int userValue;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> userValue;
    try {
        myFunction(userValue);
    } catch (const MyException& ex) {
        std::cerr << "Caught MyException: " << ex.what() << std::endl;
    } catch (...) {
        std::cerr << "Unexpected Error occurred" << std::endl;
    }
    return 0;
}
