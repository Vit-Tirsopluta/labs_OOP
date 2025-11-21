#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

void printVector(const std::vector<int>& v, const std::string& message) {
    std::cout << message << ": [ ";
    for (int x : v) {
        std::cout << std::setw(3) << x << " ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    setlocale(LC_ALL, "Ukrainian");

    int n;
    std::cout << "Введiть кiлькiсть елементiв (n): ";
    std::cin >> n;

    std::vector<int> vec(n);
    std::cout << "Введiть " << n << " цiлих чисел: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
        if(vec[0] != 0) vec[0] = 0;
    }

    printVector(vec, "Початковий масив");

    auto MinModEl = std::min_element(vec.begin(), vec.end(),
        [](int a, int b) {
            return std::abs(a) < std::abs(b);
        }
    );

    int minModIndex = std::distance(vec.begin(), MinModEl);
    
    std::cout << "\n--- Результат 1 ---" << std::endl;
    std::cout << "Мiнiмальний по модулю елемент: " << *MinModEl
            << " (модуль: " << std::abs(*MinModEl) << ")" << std::endl;
    std::cout << "Його iндекс (номер): " << minModIndex << std::endl;


    auto firstNegIt = std::find_if(vec.begin(), vec.end(),
        [](int x) {
            return x < 0;
        }
    );

    int vecSum = 0;
    std::cout << "\n--- Результат 2 ---" << std::endl;
    std::cout << "Виведення суми елеметів вектора по модулую." << std::endl;
    for (int i = 1; i < vec.size(); i++) {
        vecSum += abs(vec[i]);
    }
    std::cout << "Сума всіх елементів масиву по модулю = " << vecSum << std::endl;

    std::cout << "\n--- Додатково: Перестановка (Парнi iндекси | Непарнi iндекси) ---" << std::endl;

    std::vector<int> evenPositions;
    std::vector<int> oddPositions;
    std::partition_copy(vec.begin(), vec.end(),
                        std::back_inserter(oddPositions),
                        std::back_inserter(evenPositions),
                        [](int value) { return value % 2; });
    
    vec.clear();

    vec.insert(vec.end(), evenPositions.begin(), evenPositions.end());
    
    vec.insert(vec.end(), oddPositions.begin(), oddPositions.end());

    printVector(vec, "Перетворений масив");

    return 0;
}