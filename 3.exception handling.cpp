#include <iostream>
#include <stdexcept>
class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "This is a custom exception!";
    }
};
void myFunction() {
    throw MyException();
}
int main() {
    try {
        myFunction();
    } catch (const MyException& ex) {
        std::cerr << "Caught MyException: " << ex.what() << std::endl;
    } catch (const std::exception& ex) {
        std::cerr << "Caught Exception: " << ex.what() << std::endl;
    }

    return 0;
}

