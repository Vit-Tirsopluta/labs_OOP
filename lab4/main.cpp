#include <iostream>
#include <fstream>
#include <clocale>
#include "Employee.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    Employee employee1;
    cout << "Введіть дані для об'єкта службовець:\n";
    cin >> employee1;

    cout << "\n----------------------------------------------\n";
    cout << "Ви ввели наступну інформацію: ";
    cout << employee1;
    cout << "----------------------------------------------\n\n";

    cout << "-> Записуємо інформацію у файл 'data.txt'...\n";
    ofstream outFile("data.txt");
    if (outFile.is_open()) {
        outFile << employee1;
        outFile.close();
    } else {
        cerr << "Помилка відкриття файлу для запису\n";
        return 1;
    }

    cout << "Зчитуємо інформацію з файлу 'data.txt'...\n";
    Employee employeeFromFile;
    ifstream inFile("data.txt");
    if (inFile.is_open()) {
        inFile >> employeeFromFile;
        inFile.close();
        cout << "-> Зчитування успішно завершено.\n\n";
    } else {
        cerr << "Помилка відкриття файлу для зчитування!\n";
        return 1;
    }
    
    cout << "----------------------------------------------\n";
    cout << "Інформація, зчитана з файлу:\n";
    cout << employeeFromFile;
    cout << "----------------------------------------------\n\n";

    return 0;
}