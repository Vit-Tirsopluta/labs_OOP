#pragma once
#include <string>

class ListCalls {
    std::string* contacts;
    size_t size;
    size_t capacity;

    void Resize();

public:
    ListCalls();
    ~ListCalls();

    void AddContact(const std::string& name);
    void RemoveContact(size_t index);
    void ChangeContact(size_t index, const std::string& new_name);
    std::string GetContact(size_t index) const;
    void Show() const;

    size_t GetSize() const;
};