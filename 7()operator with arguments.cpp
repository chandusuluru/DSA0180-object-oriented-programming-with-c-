#include <iostream>

class FunctionCaller {
public:
    int operator()(int a, int b) const {
        return add(a, b);
    }

private:
    
    int add(int x, int y) const {
        return x + y;
    }
};

int main() {
    
    FunctionCaller functionCaller;

    
    int result = functionCaller(3, 5);
    std::cout << "Result of calling the function: " << result << std::endl;

    return 0;
}

