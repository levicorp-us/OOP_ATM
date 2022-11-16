#pragma once
#include <string>
using namespace std;

class Card {
    private:
    public:
    //빈깡통이 되어버린;
    //general과 admin에서 겹치는 요소가 사실상 없어보임

};

class General_Card {
private:
    string account_number;
    string bank_type;
public:
    General_Card(string acc_num, string bank);
    string GetAccNum();
    string GetBanktype();
    
};

class Admin_Card {
public:
    Admin_Card();
    //void Get_Transaction_History();
    //ATM과 합의 필요
};