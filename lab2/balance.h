#pragma once
#include <iostream>

class Balance{
    float currentBalance;
public:
    Balance(float init = 100);

    void TopUp(float amount);
    void Spend(float amount);
    float GetBalance() const;
    void Show() const;
};
