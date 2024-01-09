#include <iostream>
#include <stdexcept>
#include <memory>
class Resource {
public:
    Resource() {
        std::cout << "Resource acquired." << std::endl;
    }
    ~Resource() {
        std::cout << "Resource released." << std::endl;
    }
};
void myFunction(int value){
    Resource resource;
    if (value < 0) {
        throw std::invalid_argument("Negative value not allowed");
    }
    std::cout << "myFunction executed with value: " << value << std::endl;
}
int main() {
    int userValue;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> userValue;
    try {
        std::unique_ptr<Resource> resourceManager(new Resource);
        myFunction(userValue);
    } catch (const std::exception& ex) {
        std::cerr << "Caught exception: " << ex.what() << std::endl;
    } catch (...) {
        std::cerr << "Unexpected Error occurred" << std::endl;
    }
    return 0;
}
