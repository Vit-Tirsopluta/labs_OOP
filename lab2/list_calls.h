#ifndef LIST_CALLS_H
#define LIST_CALLS_H

#include <string>
#include <vector>

class ListCalls {
private:
    std::vector<std::string> contacts;

public:
    void AddContact(const std::string& name);
    void RemoveContact(size_t index);
    void ChangeContact(size_t index, const std::string& newName);
    std::string GetContact(size_t index) const;
    void Show() const;
};

#endif
