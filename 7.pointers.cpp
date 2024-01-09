#include <iostream>
int main() {
    float* ptrFloat = nullptr;
    ptrFloat = new float;
    *ptrFloat = 3.14f;
    std::cout << "Value of the float: " << *ptrFloat << std::endl;
    delete ptrFloat;
    return 0;
}
