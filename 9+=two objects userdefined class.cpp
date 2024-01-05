#include <iostream>
class MyClass {
private:
    int value;
public:
    MyClass(int val = 0) : value(val) {}
    MyClass& operator+=(const MyClass& other) {
        value += other.value;
        return *this;
    }
    void display() const {
        std::cout << "Current value: " << value << std::endl;
    }
};
int main() {
    MyClass obj1(5);
    MyClass obj2(10);
    obj1 += obj2;
    obj1.display();

    return 0;
}

