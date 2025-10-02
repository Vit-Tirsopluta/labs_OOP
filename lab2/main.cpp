#include "mobile_phone.h"
#include <iostream>

int main() {
    SIM_card sim("380971234567", "Kyivstar");
    MobilePhone phone(sim, 50);

    phone.ShowSIM();
    phone.ShowBalance();

    phone.AddContact("Mom");
    phone.AddContact("Dad");
    phone.AddContact("Friend");

    phone.ShowContacts();

    phone.MakeCall(0);
    phone.ShowBalance();

    phone.TopUp(100);
    std::cout << "Your balance was successfully topped up!" << std::endl;
    phone.ShowBalance();

    return 0;
}
