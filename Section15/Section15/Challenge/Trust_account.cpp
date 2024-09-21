#include "Trust_account.h"
#include <iostream>
#include <string>

Trust_account::Trust_account(std::string name, double amount) :
    Savings_Account(name, amount) {
}

bool Trust_account::withdraw(double amount) {
    if (amount_withdraw < 3 && amount < get_balance() * 0.2) {
        amount_withdraw++;
        std::cout << amount_withdraw;
        return Savings_Account::withdraw(amount);
    } else {
        std::cout << "Error,the withdraw_count have 3 times or money greater 0.2total_amount,cant't  withdraw\n";
    }

    return false;
}

bool Trust_account::deposit(double amount) {
    if (amount >= 5000.0)
        return Account::deposit(amount + 50.0);
    else
        return Account::deposit(amount);
}
