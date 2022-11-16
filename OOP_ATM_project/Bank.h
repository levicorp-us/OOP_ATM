#pragma once
#include <string>
#include "Account.h"

class Account;
using namespace std;

class Bank {
    private:
        string bank_name;
        Account** accounts;
        int account_len;
    public:
        Bank(string bankname, Account** acclist, int acc_len);
        Account* getAcc(string accnum); // Acc 못찾으면 nullptr 반환
        string getAccPW(string accnum); // Acc 못찾으면 0 반환
        void showAccounts(); // test용
};