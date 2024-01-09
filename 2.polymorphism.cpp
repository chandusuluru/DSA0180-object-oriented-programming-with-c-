#include <iostream>
class Animal {
public:
    virtual void speak() const = 0;
};
class Cat : public Animal {
public:
    void speak() const override {
        std::cout << "Meow! I am a cat." << std::endl;
    }
};

class Dog : public Animal {
public:
    void speak() const override {
        std::cout << "Woof! I am a dog." << std::endl;
    }
};

int main() {
    Cat myCat;
    Dog myDog;
    std::cout << "Cat says: ";
    myCat.speak();

    std::cout << "Dog says: ";
    myDog.speak();

    return 0;
}

