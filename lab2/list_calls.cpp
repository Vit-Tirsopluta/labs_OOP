#include "list_calls.h"
#include <iostream>

void ListCalls::AddContact(const std::string& name) {
    contacts.push_back(name);
}

void ListCalls::RemoveContact(size_t index) {
    if (index < contacts.size()) {
        contacts.erase(contacts.begin() + index);
    }
}

void ListCalls::ChangeContact(size_t index, const std::string& newName) {
    if (index < contacts.size()) {
        contacts[index] = newName;
    }
}

std::string ListCalls::GetContact(size_t index) const {
    if (index < contacts.size()) {
        return contacts[index];
    }
    return "";
}

void ListCalls::Show() const {
    for (size_t i = 0; i < contacts.size(); i++) {
        std::cout << i << ": " << contacts[i] << std::endl;
    }
}
