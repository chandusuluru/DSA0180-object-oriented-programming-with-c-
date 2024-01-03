#include <iostream>
#include <string>

class Car {
public:

    Car(const std::string& make, const std::string& model, int year) : make(make), model(model), year(year) {
        std::cout << "Constructor called for " << year << " " << make << " " << model << " car" << std::endl;
    }

    
    ~Car() {
        std::cout << "Destructor called for " << year << " " << make << " " << model << " car" << std::endl;
    }


    void displayInfo() {
        std::cout << "Make: " << make << ", Model: " << model << ", Year: " << year << std::endl;
    }

private:
    std::string make;
    std::string model;
    int year;
};

int main() {
    
    Car myCar("Toyota", "Camry", 2022);

    
    myCar.displayInfo();

    
    return 0;
}

