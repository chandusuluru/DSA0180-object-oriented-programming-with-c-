#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<<int>>data;
    int rows;
    int cols;

public:
    
    Matrix(int numRows, int numCols) : rows(numRows), cols(numCols) {
        data.resize(rows, std::vector<int>(cols, 0));
    }


    Matrix operator*(const Matrix& other) const {
        
        if (cols != other.rows) {
            std::cerr << "Matrix multiplication not possible. Returning an empty matrix." << std::endl;
            return Matrix(0, 0);
        }

        
        Matrix result(rows, other.cols);

        
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }

    
    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix matrix1(2, 3);
    Matrix matrix2(3, 2);
    matrix1 = {{1, 2, 3}, {4, 5, 6}};
    matrix2 = {{7, 8}, {9, 10}, {11, 12}};

    
    Matrix result = matrix1 * matrix2;

    
    std::cout << "Matrix 1:" << std::endl;
    matrix1.display();

    std::cout << "\nMatrix 2:" << std::endl;
    matrix2.display();

    std::cout << "\nResultant Matrix:" << std::endl;
    result.display();

    return 0;
}

