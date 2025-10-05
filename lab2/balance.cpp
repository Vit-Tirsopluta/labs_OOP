#include "balance.h"

Balance::Balance(float init){
    currentBalance = init;
}

void Balance::TopUp(float amount){
    currentBalance += amount;
}

void Balance::Spend(float amount){
    if (currentBalance >= amount){
        currentBalance -= amount;
    }
    else{
        std::cout << "Not enough money!\n";
    }
}

float Balance::GetBalance() const{
    return currentBalance;
}

void Balance::Show() const {
    std::cout << "Current balance: " << currentBalance << " UAH\n";
}
