#pragma once
#include <string>
#include <iostream>

class SIM_card {
    std::string number;
    std::string operatorName;
public:
    SIM_card(const std::string& num = "0000000000", const std::string& op = "Unknown");

    void SetNumber(const std::string& num);
    std::string GetNumber() const;

    void SetOperator(const std::string& op);
    std::string GetOperator() const;

    void Show() const;
};
