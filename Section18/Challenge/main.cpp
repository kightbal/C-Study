#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "InsufficentFundsException.h"
using namespace std;

int main() {
    // test your code here
    std::cout << "Program completed successfully" << std::endl;
    std::unique_ptr<Account> ptr_chk = std::make_unique<Checking_Account>("custor", 1000);
    std::unique_ptr<Account> ptr_sav = std::make_unique<Savings_Account>("save", 200);
    std::shared_ptr<Account> ptr_trs = std::make_shared<Trust_Account>("trust", 2000);

    try {
        // Savings_Account acount("test", -20);
        ptr_chk->withdraw(2000);

    } catch (IllegalBalanceException &ex) {
        cerr << ex.what() << endl;
    } catch (InsufficientFundsException &ex) {
        cerr << ex.what() << endl;
    }

    cout << "main finished" << endl;

    return 0;
}
