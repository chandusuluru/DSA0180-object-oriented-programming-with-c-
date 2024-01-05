#include <iostream>

class MyClass {
private:
    int data;

public:
    
    MyClass(int value = 0) : data(value) {}

    
    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
        os << "Data: " << obj.data;
        return os;
    }
};

int main() {
    
    MyClass myObject(42);

    
    std::cout << "MyObject: " << myObject << std::endl;

    return 0;
}

