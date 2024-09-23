// Simple Account
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>
#include "I_Printable.h"
class Account : public I_Printable {
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;

protected:
    std::string name;
    double balance;
    std::string type;

public:
    Account(std::string name = def_name, double balance = def_balance, std::string type = "Null");
    // Account(std::string name = "Unamed Account", double balance = 0.0);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    double get_balance() const;
    virtual void print(std::ostream &os) const override;
    std::string getType();
    virtual ~Account() = default;
};
#endif