#include <iostream>
#include "matrix.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    int rows, cols;

    cout << "--- Створення двовимірного масиву на базі vector<vector<int>> ---\n";
    cout << "Введіть кількість рядків: ";
    cin >> rows;
    cout << "Введіть кількість стовпців: ";
    cin >> cols;

    if (rows <= 0 || cols <= 0) {
        cout << "Помилка: Розміри матриці мають бути додатніми.\n";
        return 1;
    }

    Matrix matrix(rows, cols);

    matrix.fillFromInput();

    matrix.print();

    int minValue = matrix.findMin();
    int maxValue = matrix.findMax();

    cout << "\n--- Результати пошуку ---\n";
    cout << "Мінімальний елемент у матриці: " << minValue << endl;
    cout << "Максимальний елемент у матриці: " << maxValue << endl;

    return 0;
}