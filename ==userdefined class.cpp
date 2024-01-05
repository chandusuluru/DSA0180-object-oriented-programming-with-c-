#include <iostream>

class MyObject {
private:
    int data;

public:
    MyObject(int value = 0) : data(value) {}

    
    bool operator==(const MyObject& other) const {
        return this->data == other.data;
    }
    void display() const {
        std::cout << "Data: " << data << std::endl;
    }
};
int main() {
    MyObject obj1(42);
    MyObject obj2(42);
    MyObject obj3(24);
    if (obj1 == obj2) {
        std::cout << "obj1 is equal to obj2" << std::endl;
    } else {
        std::cout << "obj1 is not equal to obj2" << std::endl;
    }

    if (obj1 == obj3) {
        std::cout << "obj1 is equal to obj3" << std::endl;
    } else {
        std::cout << "obj1 is not equal to obj3" << std::endl;
    }

    return 0;
}

