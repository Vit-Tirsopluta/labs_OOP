#pragma once
#include <vector>
#include <iostream>

class Matrix {
private:
    std::vector<std::vector<int>> data;
    int rows;
    int cols;

public:
    Matrix(int numRows, int numCols);

    void fillFromInput();
    void print();
    int findMin();
    int findMax();
};