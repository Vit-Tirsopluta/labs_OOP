#pragma once
#include <iostream>

template <typename T>
class Set {
private:
    T* elements;
    int size;
    int capacity;

    void resize() {
        capacity *= 2;
        T* newElements = new T[capacity];
        for (int i = 0; i < size; ++i) {
            newElements[i] = elements[i];
        }
        delete[] elements;
        elements = newElements;
    }

public:
    Set() : size(0), capacity(10) {
        elements = new T[capacity];
    }

    ~Set() {
        delete[] elements;
    }

    bool contains(const T& element) const {
        for (int i = 0; i < size; ++i) {
            if (elements[i] == element) {
                return true;
            }
        }
        return false;
    }

    void add(const T& element) {
        if (contains(element)) {
            return;
        }
        if (size == capacity) {
            resize();
        }
        elements[size] = element;
        size++;
    }

    Set<T> unionWith(const Set<T>& other) const {
        Set<T> result;
        for (int i = 0; i < this->size; ++i) {
            result.add(this->elements[i]);
        }
        for (int i = 0; i < other.size; ++i) {
            result.add(other.elements[i]);
        }
        return result;
    }

    Set<T> intersectionWith(const Set<T>& other) const {
        Set<T> result;
        for (int i = 0; i < this->size; ++i) {
            if (other.contains(this->elements[i])) {
                result.add(this->elements[i]);
            }
        }
        return result;
    }

    Set<T> differenceWith(const Set<T>& other) const {
        Set<T> result;
        for (int i = 0; i < this->size; ++i) {
            if (!other.contains(this->elements[i])) {
                result.add(this->elements[i]);
            }
        }
        return result;
    }


    bool operator==(const Set<T>& other) const {
        if (this->size != other.size) {
            return false;
        }
        for (int i = 0; i < this->size; ++i) {
            if (!other.contains(this->elements[i])) {
                return false;
            }
        }
        return true;
    }

    friend std::ostream& operator<<(std::ostream& os, const Set<T>& s) {
        os << "{ ";
        for (int i = 0; i < s.size; ++i) {
            os << s.elements[i];
            if (i < s.size - 1) {
                os << ", ";
            }
        }
        os << " }";
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Set<T>& s) {
        T element;
        std::cout << "Введіть елементи множини (введіть 'q' для завершення): ";
        while (is >> element) {
            s.add(element);
        }
        is.clear();
        is.ignore(10000, '\n');
        return is;
    }
};