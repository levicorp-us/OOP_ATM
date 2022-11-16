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
        Account* getAcc(string accnum); // Acc ��ã���� nullptr ��ȯ
        string getAccPW(string accnum); // Acc ��ã���� 0 ��ȯ
        void showAccounts(); // test��
};