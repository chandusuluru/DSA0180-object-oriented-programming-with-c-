#include <iostream>
int main() {
    int* ptrInteger = nullptr;
    ptrInteger = new int;
    *ptrInteger = 42;
    std::cout << "Value of the integer: " << *ptrInteger << std::endl;
    delete ptrInteger;
    return 0;
}

