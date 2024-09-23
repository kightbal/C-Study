#include "Account.h"

Account::Account(std::string name, double balance, std::string type) :
    name{name}, balance{balance}, type{type} {
}

bool Account::deposit(double amount) {
    if (amount < 0)
        return false;
    else {
        balance += amount;
        return true;
    }
}
bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    } else
        return false;
}

double Account::get_balance() const {
    return balance;
}

void Account::print(std::ostream &os) const {
    os << "\n=== Accounts===========================================" << std::endl;
}

std::string Account::getType() {
    return type;
}