#include "Bank.h"
#include <iostream>
using namespace std;

Bank::Bank(string bankname, Account** acclist, int acc_len)
: bank_name{bankname}, accounts{acclist}, account_len{acc_len}
{}

Account* Bank::getAcc(string accnum) {
    for (int i = 0; i < account_len; i++) {
        if (accnum == accounts[i]->get_acc_number())
            return accounts[i];
    }
    return nullptr;
}

string Bank::getAccPW(string accnum) {
    Account *account = getAcc(accnum);
    if (!account) return "none";
    return account->get_password();
}

string Bank::getBankName() {
    return bank_name;
}

void Bank::showAccounts() {
    cout << "================================" << endl;
    for (int i = 0; i < account_len; i++) {
        cout << "account number : " << accounts[i]->get_acc_number() << endl;
        cout << "bank name : " << accounts[i]->get_bank_name() << endl;
        cout << "user name : " << accounts[i]->get_user_name() << endl;
        cout << "password : " << accounts[i]->get_password() << endl;
        cout << "fund : " << accounts[i]->get_fund() << endl;
        cout << "================================" << endl;
    }
}