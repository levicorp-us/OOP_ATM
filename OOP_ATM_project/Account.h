#pragma once
#include <string>

using namespace std;

class Account {
    private:
        string bank_name;
        string user_name;
        string acc_number;
        string password;
        int fund;
    public:
        Account(string bankname, string username, string pw, string acc_number, int initfund);
        void edit_acc_fund(int amount);

        string get_acc_number();
        string get_bank_name();
        string get_user_name();
        string get_password();
        int get_fund();
};