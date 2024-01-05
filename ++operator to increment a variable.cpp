#include <iostream>

class Incrementer {
private:
    int value;

public:
    
    Incrementer(int initialValue = 0) : value(initialValue) {}

    
    Incrementer operator++() {
    
        value++;
        return *this;
    }

    
    void display() const {
        std::cout << "Current value: " << value << std::endl;
    }
};

int main() {
    Incrementer counter(5);

    
    ++counter;

    
    counter.display();

    return 0;
}

