#include <iostream>

class Employee {
public:
    virtual double calculatePay() const = 0;
};

class Manager : public Employee {
private:
    double salary;
    double bonus;

public:
    Manager(double baseSalary, double bonusAmount) : salary(baseSalary), bonus(bonusAmount) {}
    double calculatePay() const override {
        return salary + bonus;
    }
};
class Engineer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    Engineer(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    double calculatePay() const override {
        return hourlyRate * hoursWorked;
    }
};

int main() {
    Manager manager(50000.0, 10000.0);
    Engineer engineer(25.0, 40);
    std::cout << "Manager's Pay: $" << manager.calculatePay() << std::endl;
    std::cout << "Engineer's Pay: $" << engineer.calculatePay() << std::endl;
    return 0;
}

