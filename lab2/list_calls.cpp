#include "list_calls.h"
#include <iostream>

ListCalls::ListCalls() {
    size = 0;
    capacity = 5; 
    contacts = new std::string[capacity];
}

ListCalls::~ListCalls() {
    delete[] contacts;
}


void ListCalls::Resize() {
    capacity *= 2;
    std::string* new_contacts = new std::string[capacity];
    for (size_t i = 0; i < size; i++) {
        new_contacts[i] = contacts[i];
    }
    delete[] contacts;
    contacts = new_contacts;
}


void ListCalls::AddContact(const std::string& name) {
    if (size >= capacity) {
        Resize();
    }
    contacts[size] = name;
    size++;
}

void ListCalls::RemoveContact(size_t index) {
    if (index < size) {
        for (size_t i = index; i < size - 1; i++) {
            contacts[i] = contacts[i + 1];
        }
        size--;
    }
}

void ListCalls::ChangeContact(size_t index, const std::string& new_name) {
    if (index < size) {
        contacts[index] = new_name;
    }
}

std::string ListCalls::GetContact(size_t index) const {
    if (index < size) {
        return contacts[index];
    }
    return "Invalid index";
}


void ListCalls::Show() const {
    for (size_t i = 0; i < size; i++) {
        std::cout << i << ": " << contacts[i] << "\n";
    }
}


size_t ListCalls::GetSize() const {
    return size;
}
