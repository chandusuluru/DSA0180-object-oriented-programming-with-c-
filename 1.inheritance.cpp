#include <iostream>
#include <string>
class Person {
protected:
    std::string name;
    int age;
    std::string gender;
public:
    Person(const std::string& n, int a, const std::string& g) : name(n), age(a), gender(g) {}
    void setName(const std::string& n) { name = n; }
    std::string getName() const { return name; }

    void setAge(int a) { age = a; }
    int getAge() const { return age; }

    void setGender(const std::string& g) { gender = g; }
    std::string getGender() const { return gender; }
};

class Student : public Person {
private:
    int rollNumber;
    std::string className;

public:
    Student(const std::string& n, int a, const std::string& g, int roll, const std::string& className)
        : Person(n, a, g), rollNumber(roll), className(className) {}
    void setRollNumber(int roll) { rollNumber = roll; }
    int getRollNumber() const { return rollNumber; }

    void setClassName(const std::string& className) { this->className = className; }
    std::string getClassName() const { return className; }
};

class Teacher : public Person {
private:
    std::string subject;
    double salary;

public:
    Teacher(const std::string& n, int a, const std::string& g, const std::string& subj, double sal)
        : Person(n, a, g), subject(subj), salary(sal) {}
    void setSubject(const std::string& subj) { subject = subj; }
    std::string getSubject() const { return subject; }

    void setSalary(double sal) { salary = sal; }
    double getSalary() const { return salary; }
};

int main() {
    Student student("John", 20, "Male", 101, "Physics");
    Teacher teacher("Mrs. Smith", 35, "Female", "Mathematics", 50000.0);
    std::cout << "Student Information:" << std::endl;
    std::cout << "Name: " << student.getName() << ", Age: " << student.getAge() << ", Gender: " << student.getGender()
              << ", Roll Number: " << student.getRollNumber() << ", Class: " << student.getClassName() << std::endl;

    std::cout << "\nTeacher Information:" << std::endl;
    std::cout << "Name: " << teacher.getName() << ", Age: " << teacher.getAge() << ", Gender: " << teacher.getGender()
              << ", Subject: " << teacher.getSubject() << ", Salary: " << teacher.getSalary() << std::endl;

    return 0;
}

