#pragma once
#include <string>

using namespace std;

class Transaction {
    private:
        int ID;
        int card_number;
        int type; //recive int for ATM by enum; or string
        int amount;
    public:
        Transaction(int Idnum, int card_num, int quantity, int mode);
        int get_ID();
        int get_card_number();
        int get_amount();
        int get_type();
};