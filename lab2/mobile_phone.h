#pragma once
#include "SIM_card.h"
#include "list_calls.h"
#include "balance.h"

class MobilePhone {
    SIM_card sim;
    ListCalls contacts;
    Balance balance;
public:
    MobilePhone(const SIM_card& s, float init_balance = 100);

    void AddContact(const std::string& name);
    void ShowContacts() const;

    void MakeCall(int index);
    void TopUp(float amount);

    void ShowBalance() const;
    void ShowSIM() const;
};
