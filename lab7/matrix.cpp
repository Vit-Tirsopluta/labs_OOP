#include "matrix.h"

Matrix::Matrix(int numRows, int numCols) : rows(numRows), cols(numCols) {
    data.resize(rows);
    
    for (int i = 0; i < rows; ++i) {
        data[i].resize(cols);
    }
}

void Matrix::fillFromInput() {
    std::cout << "Будь ласка, введіть " << rows * cols << " цілих чисел:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Елемент [" << i << "][" << j << "]: ";
            std::cin >> data[i][j];
        }
    }
}

void Matrix::print() {
    std::cout << "\nВаша матриця (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int Matrix::findMin() {
    if (rows == 0 || cols == 0) {
        return 0;
    }

    int minVal = data[0][0];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (data[i][j] < minVal) {
                minVal = data[i][j];
            }
        }
    }
    return minVal;
}

int Matrix::findMax() {
    if (rows == 0 || cols == 0) {
        return 0;
    }

    int maxVal = data[0][0];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (data[i][j] > maxVal) {
                maxVal = data[i][j];
            }
        }
    }
    return maxVal;
}