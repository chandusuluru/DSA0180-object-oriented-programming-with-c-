#include <iostream>
int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}

int main() {
    int resultInt = add(5, 10);
    double resultDouble = add(3.5, 2.5);
    std::cout << "Sum of integers: " << resultInt << std::endl;
    std::cout << "Sum of floating-point numbers: " << resultDouble << std::endl;

    return 0;
}

