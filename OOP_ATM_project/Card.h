#pragma once
#include <string>
using namespace std;

class Card {
    private:
    public:
    //������� �Ǿ����;
    //general�� admin���� ��ġ�� ��Ұ� ��ǻ� �����

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
    //ATM�� ���� �ʿ�
};