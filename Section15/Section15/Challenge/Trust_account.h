#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"
#include <string>

class Trust_account : public Savings_Account {
    // 类的声明和成员函数

protected:
    int amount_withdraw = 0;

public:
    Trust_account(std::string name = "Unnamed Checking_amount", double amount = 0.0);
    bool withdraw(double amount);
    bool deposit(double amount);
};

#endif // TRUST_ACCOUNT_H
