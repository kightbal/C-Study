#include <string>
#include <iostream>
#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double amount, double fee) :
    Account(name, amount) {
    this->fee = fee;
}

bool Checking_Account::withdraw(double amount) {
    return Account::withdraw(amount + fee);
}