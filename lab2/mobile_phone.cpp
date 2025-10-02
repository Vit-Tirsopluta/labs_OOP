#include "mobile_phone.h"
#include <iostream>

MobilePhone::MobilePhone(const SIM_card& s, float init_balance)
    : sim(s), balance(init_balance) {}

void MobilePhone::AddContact(const std::string& name) {
    contacts.AddContact(name);
}

void MobilePhone::ShowContacts() const {
    contacts.Show();
}

void MobilePhone::MakeCall(int index) {
    std::string contact = contacts.GetContact(index);
    if (balance.GetBalance() >= 5) {
        std::cout << "Calling " << contact << "...\n";
        balance.Spend(5);
    } else {
        std::cout << "Not enough balance to call!\n";
    }
}

void MobilePhone::TopUp(float amount) {
    balance.TopUp(amount);
}

void MobilePhone::ShowBalance() const {
    balance.Show();
}

void MobilePhone::ShowSIM() const {
    sim.Show();
}
