#include <iostream>

int main() {
    double* ptrDouble = nullptr;
    ptrDouble = new double;
    *ptrDouble = 5.678;
    std::cout << "Value of the double: " << *ptrDouble << std::endl;
    delete ptrDouble;
    return 0;
}

