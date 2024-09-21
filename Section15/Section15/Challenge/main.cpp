// Section 15
// Challenge
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Trust_account.h"
#include "Checking_Account.h"
using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe", 2000});
    accounts.push_back(Account{"Curly", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    // Savings

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account{});
    sav_accounts.push_back(Savings_Account{"Superman"});
    sav_accounts.push_back(Savings_Account{"Batman", 2000});
    sav_accounts.push_back(Savings_Account{"Wonderwoman", 5000, 5.0});

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    vector<Trust_account> trs_accounts;
    trs_accounts.push_back(Trust_account{});
    trs_accounts.push_back(Trust_account{"SEE"});
    trs_accounts.push_back(Trust_account{"CUSLQ", 2000});
    trs_accounts.push_back(Trust_account{"KEBIT", 5000});

    display(trs_accounts);
    deposit(trs_accounts, 10000);
    withdraw(trs_accounts, 200);
    withdraw(trs_accounts, 200);
    withdraw(trs_accounts, 200);
    withdraw(trs_accounts, 200);

    vector<Checking_Account> chk_accounts;
    chk_accounts.push_back(Checking_Account{});
    chk_accounts.push_back(Checking_Account{"SEE"});
    chk_accounts.push_back(Checking_Account{"CUSLQ", 2000});
    chk_accounts.push_back(Checking_Account{"KEBIT", 5000, 3.0});

    display(chk_accounts);
    deposit(chk_accounts, 1000);
    withdraw(chk_accounts, 2000);

    return 0;
}
