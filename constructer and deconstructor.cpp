#include <iostream>
#include <string>

class Student {
public:
    Student(const std::string& name, int age) : name(name), age(age) {
        std::cout << "Constructor called for " << name << std::endl;
    }
    ~Student() {
        std::cout << "Destructor called for " << name << std::endl;
    }

    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    Student student1("John Doe", 20);

    student1.displayInfo();

    return 0;
}

