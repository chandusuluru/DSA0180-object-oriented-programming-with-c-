#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    std::string species;
    int age;

public:
    Animal(const std::string& n, const std::string& sp, int a) : name(n), species(sp), age(a) {}
    void setName(const std::string& n) { name = n; }
    std::string getName() const { return name; }

    void setSpecies(const std::string& sp) { species = sp; }
    std::string getSpecies() const { return species; }

    void setAge(int a) { age = a; }
    int getAge() const { return age; }
};

class Cat : public Animal {
private:
    std::string color;
    std::string breed;

public:
    Cat(const std::string& n, const std::string& color, const std::string& breed, int a)
        : Animal(n, "Cat", a), color(color), breed(breed) {}

    void setColor(const std::string& c) { color = c; }
    std::string getColor() const { return color; }

    void setBreed(const std::string& b) { breed = b; }
    std::string getBreed() const { return breed; }
};

class Dog : public Animal {
private:
    double weight;
    std::string breed;

public:
    Dog(const std::string& n, double weight, const std::string& breed, int a)
        : Animal(n, "Dog", a), weight(weight), breed(breed) {}
    void setWeight(double w) { weight = w; }
    double getWeight() const { return weight; }

    void setBreed(const std::string& b) { breed = b; }
    std::string getBreed() const { return breed; }
};

int main() {
    Cat myCat("Whiskers", "Orange", "Persian", 3);
    Dog myDog("Buddy", 25.5, "Golden Retriever", 2);
    std::cout << "Cat Information:" << std::endl;
    std::cout << "Name: " << myCat.getName() << ", Species: " << myCat.getSpecies() << ", Age: " << myCat.getAge()
              << ", Color: " << myCat.getColor() << ", Breed: " << myCat.getBreed() << std::endl;

    std::cout << "\nDog Information:" << std::endl;
    std::cout << "Name: " << myDog.getName() << ", Species: " << myDog.getSpecies() << ", Age: " << myDog.getAge()
              << ", Weight: " << myDog.getWeight() << " kg, Breed: " << myDog.getBreed() << std::endl;

    return 0;
}

