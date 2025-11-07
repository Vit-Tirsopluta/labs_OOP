#include <iostream>
#include "Set.h"


template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


template <typename T>
void bubbleSort(T arr[], int size) {
    
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Ukrainian");

    int intArr[] = {64, 34, 25, 12, 22, 11, 90};
    int n1 = sizeof(intArr) / sizeof(intArr[0]);
    
    std::cout << "Int масив (до сортування):   ";
    printArray(intArr, n1);
    
    bubbleSort(intArr, n1);
    
    std::cout << "Int масив (після сортування): ";
    printArray(intArr, n1);

    std::cout << "--------------------" << std::endl;

    double doubleArr[] = {3.14, 1.61, 2.71, 0.57};
    int n2 = sizeof(doubleArr) / sizeof(doubleArr[0]);

    std::cout << "Double масив (до сортування):   ";
    printArray(doubleArr, n2);

    bubbleSort(doubleArr, n2);

    std::cout << "Double масив (після сортування): ";
    printArray(doubleArr, n2);

    std::cout << "--------------------" << std::endl;

    char charArr[] = {'z', 'a', 'c', 'b', 'x'};
    int n3 = sizeof(charArr) / sizeof(charArr[0]);

    std::cout << "Char масив (до сортування):   ";
    printArray(charArr, n3);

    bubbleSort(charArr, n3);

    std::cout << "Char масив (після сортування): ";
    printArray(charArr, n3);

    std::cout << "------------task 2-----------------" << std::endl;

    std::cout << "=== Демонстрація з <int> ===" << std::endl;
    
    Set<int> setA;
    setA.add(1);
    setA.add(2);
    setA.add(3);
    setA.add(2);
    std::cout << "Множина A: " << setA << std::endl;

    Set<int> setB;
    setB.add(3);
    setB.add(4);
    setB.add(5);
    std::cout << "Множина B: " << setB << std::endl;

    Set<int> unionAB = setA.unionWith(setB);
    std::cout << "A об'єднання B: " << unionAB << std::endl;

    Set<int> intersectionAB = setA.intersectionWith(setB);
    std::cout << "A перетин B: " << intersectionAB << std::endl;

    Set<int> diffAB = setA.differenceWith(setB);
    std::cout << "A різниця B (A - B): " << diffAB << std::endl;

    std::cout << "\n=== Демонстрація з <char> ===" << std::endl;
    
    Set<char> setC;
    setC.add('a');
    setC.add('b');
    
    Set<char> setD;
    setD.add('b');
    setD.add('a');

    std::cout << "Множина C: " << setC << std::endl;
    std::cout << "Множина D: " << setD << std::endl;
    std::cout << "C == D? " << (setC == setD ? "Так" : "Ні") << std::endl;

    std::cout << "\n=== Демонстрація введення (operator>>) ===" << std::endl;
    Set<int> setInput;
    std::cin >> setInput;
    std::cout << "Ви ввели множину: " << setInput << std::endl;
    
    return 0;
}