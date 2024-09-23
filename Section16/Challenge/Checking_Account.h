#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include <iostream>
#include <string>
#include "Account.h"
#include "I_Printable.h"
class Checking_Account : public Account, I_Printable {
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;

public:
    Checking_Account(std::string name = def_name, double balance = def_balance, std::string type = "Checking_Account");
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
    virtual void print(std::ostream &os) const override;
    // Inherits the Account::deposit method
    virtual ~Checking_Account() = default;
};

#endif // _CHECKING_ACCOUNT_H_
