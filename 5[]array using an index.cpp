#include <iostream>

class CustomArray {
private:
    int* elements;
    int size;

public:
    CustomArray(int arraySize) : size(arraySize) {
        elements = new int[size];
        
        for (int i = 0; i < size; ++i) {
            elements[i] = i + 1;
        }
    }


    ~CustomArray() {
        delete[] elements;
    }

    int& operator[](int index) {
        if (index >= 0 && index < size) {
            return elements[index];
        } else {
            
            std::cerr << "Index out of bounds. Returning the first element." << std::endl;
            return elements[0];
        }
    }
    void display() const {
        std::cout << "Array elements: ";
        for (int i = 0; i < size; ++i) {
            std::cout << elements[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    
    CustomArray myArray(5);

    
    std::cout << "Original array: ";
    myArray.display();

    myArray[2] = 100;  // Modify element at index 2
    myArray[5] = 999;  // Attempt to access out-of-bounds index

    std::cout << "Modified array: ";
    myArray.display();

    return 0;
}

