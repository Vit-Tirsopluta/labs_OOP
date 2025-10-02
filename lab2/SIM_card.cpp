#include "SIM_card.h"

SIM_card::SIM_card(const std::string& num, const std::string& op) {
    number = num;
    operatorName = op;
}

void SIM_card::SetNumber(const std::string& num) {
    number = num;
}

std::string SIM_card::GetNumber() const {
    return number;
}

void SIM_card::SetOperator(const std::string& op) {
    operatorName = op;
}

std::string SIM_card::GetOperator() const {
    return operatorName;
}

void SIM_card::Show() const {
    std::cout << "SIM: " << number << " (" << operatorName << ")\n";
}
