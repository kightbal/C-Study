#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"
#include <string>
class Checking_Account : public Account {
private:
    double fee;

public:
    Checking_Account(std::string name = "Unnamed Checking_account", double amount = 0.0, double fee = 1.5);
    bool withdraw(double amount);
};

#endif // CHECKING_ACCOUNT_H